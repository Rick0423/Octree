import random

def encode_to_bits(level, offsets):
    """将level和offsets编码为18位二进制数（3*6=18位）

    Args:
      level: 有效offset的层级数 (0-5)
      offsets: 包含5个offset值的列表，每个值范围为0-7

    Returns:
      18位二进制编码（整数形式）
    """
    # 确保输入合法
    
    encoded = level
    for offset in offsets:
        encoded = (encoded << 3) | offset  # 每个offset占3位
    return encoded

def decode_from_bits(encoded):
    """从18位编码解码出level和offsets

    Args:
      encoded: 18位编码

    Returns:
      (level, offsets)元组
    """
    offsets = []
    for i in range(4, -1, -1):
        offset = (encoded >> (i * 3)) & 0b111  # 提取3位
        offsets.insert(0, offset)
    level = (encoded >> 15) & 0b111  # 提取高3位作为level
    return level, offsets

def fast_hash(pos_grid):
    """快速哈希函数

    Args:
      pos_grid: 位置网格（列表）

    Returns:
      哈希值（整数）
    """
    # 质数表
    primes = [1, 2654435, 807545, 3867465, 2099719]
    
    result = 0
    for i in range(len(pos_grid)):
        result ^= (pos_grid[i] + 1) * primes[i % len(primes)]
    return result

def hash_encode(level, offsets, hashmap_size=2048):
    """根据level和offsets计算哈希值

    Args:
      level: 有效offset的层级数
      offsets: 包含5个offset值的列表
      hashmap_size: 哈希表大小

    Returns:
      哈希索引（整数）
    """
    # 只考虑前 level+1 个offset
    valid_offsets = offsets[:level+1]
    if level >= 2:
        index = fast_hash(valid_offsets) % hashmap_size + 72
    else:
        # 计算有序索引：对于level 0和1
        index = 0
        stride = 1
        resolution = 8  # 每个offset范围为0-7，共8个可能的值
        for d in range(len(valid_offsets)):
            index += (valid_offsets[d] + 1) * stride
            stride *= resolution
    return index
print
class OCtree:
    """
    OCtree 类用于管理多棵八叉树的SRAM初始化数据生成。

    功能：
      - add_tree()：添加一棵八叉树的数据，根据各层的有效anchor数量生成16bit数据，同时保存详细信息，
                    并记录每个有效anchor的位置信息（pos encode）。
      - pack_into_64bit()：将所有添加的16bit数据按顺序每4个合并为一个64位整数。
      - write_file()：将打包好的64位数据写入指定文件，每行一个64位数据（16进制格式）。
      - write_info_file()：将每棵树的详细信息写入指定文件。
      - process_features()：遍历所有保存的有效anchor记录，根据策略写入feature数据（连续9个地址）。
      - write_feature_file()：将feature数据写入指定文件，每行一个64位数据（16进制格式）。
    """
    def __init__(self):
        # 存储所有树生成的16bit数据，后续统一打包为64bit数据
        self.all_words16 = []
        # 存储每棵树的详细信息，用于输出额外的树信息文件
        self.trees_info = []
        # 用于记录所有有效anchor的信息，每个元素为字典，包含 tree_id, level, anchor_index, offsets, pos_encode
        self.valid_anchor_list = []
        # 当前树计数（从0开始），用于记录是哪一棵树
        self.tree_count = 0
        # feature内存区域，大小为 (2048+72)*9 = 2120*9 = 19080 个64位字，初始全为0
        self.feature_memory = [0] * ((2048 + 72) * 9)
    
    def add_tree(self, level_valid_counts, total_levels=6):
        """
        添加一棵树的数据，并保存详细信息，同时记录每个有效anchor的pos encode信息。

        参数：
          level_valid_counts: dict，指定各层中“自身有效”anchor数量，
                              如 {0:1, 1:5, 2:10, 3:20, 4:0, 5:0} 表示层0~层5。
          total_levels: 树的层数，默认6层（层0～层5）。
        """
        # 计算每层的总anchor数：层0为1，其余层为 8 的幂次
        level_total_anchors = {}
        level_total_anchors[0] = 1
        for i in range(1, total_levels):
            level_total_anchors[i] = 8 ** i

        # 生成每层的“自身有效”标志数组
        valid = {}
        for level in range(total_levels):
            tot = level_total_anchors[level]
            cnt = level_valid_counts.get(level, 0)
            arr = [0] * tot
            if cnt > 0 and tot > 0:
                cnt = min(cnt, tot)
                indices = random.sample(range(tot), cnt)
                for idx in indices:
                    arr[idx] = 1
            # 层0只有一个anchor，且此处用当前树编号替代原来的0（便于后续区分）
            if level == 0:
                arr[0] = 1
            valid[level] = arr

        # 初始化各层的孩子存在标志数组，初始全为0
        child_exist = {}
        for level in range(total_levels):
            child_exist[level] = [0] * level_total_anchors[level]

        # 自底向上生成：对于层0～total_levels-2，每个anchor的孩子存在标志取决于下一层对应8个子节点中是否存在有效anchor
        for level in range(total_levels - 1):
            parent_count = level_total_anchors[level]
            for j in range(parent_count):
                children_valid = valid[level + 1][j * 8: j * 8 + 8]
                child_exist[level][j] = 1 if any(children_valid) else 0

        # 将每层所有anchor（每个占2bit：高位为自身有效，低位为孩子存在）打包到16bit字中
        words16 = []
        for level in range(total_levels):
            anchors_bits = []
            tot = level_total_anchors[level]
            for j in range(tot):
                two_bit = (valid[level][j] << 1) | child_exist[level][j]
                anchors_bits.append(two_bit)
            # 每16bit存放8个anchor，若不足8个则补0
            if len(anchors_bits) % 8 != 0:
                anchors_bits.extend([0] * (8 - (len(anchors_bits) % 8)))
            for i in range(0, len(anchors_bits), 8):
                word16 = 0
                for k in range(8):
                    word16 |= (anchors_bits[i + k] << (2 * k))
                words16.append(word16)

        # 保存树的详细信息
        self.trees_info.append({
            'valid': valid,
            'child_exist': child_exist,
            'total_levels': total_levels,
            'level_total_anchors': level_total_anchors
        })

        # 记录当前树的有效anchor信息到全局列表中
        # 当前树编号为 self.tree_count
        for level in range(total_levels):
            tot = level_total_anchors[level]
            for j in range(tot):
                if valid[level][j] == 1:
                    # 对于 level 0，用当前树编号作为 offset0，其余补0
                    if level == 0:
                        offsets = [self.tree_count, 0, 0, 0, 0]
                    else:
                        offsets = self.compute_offsets(j, self.tree_count,level)
                    pos_encode = encode_to_bits(level, offsets)
                    self.valid_anchor_list.append({
                        'tree_id': self.tree_count,
                        'level': level,
                        'anchor_index': j,
                        'offsets': offsets,
                        'pos_encode': pos_encode
                    })

        # 将当前树的 16bit 数据保存到总数据中
        self.all_words16.extend(words16)
        self.tree_count += 1

    def compute_offsets(self,index,tree_cnt, level):
        """
        计算 anchor 在某层的 offset 列表，符合二进制位移的计算方式。

        Args:
          index: 当前 anchor 在该层的索引
          level: 当前层号（0~total_levels-1）

        Returns:
          offsets: 长度为5的列表，符合 address_part_ 计算方式
        """
        if level == 0:
            return [0, 0, 0, 0, 0]

        LOG_CHILD_NUM = 3  # 8进制对应3位二进制
        offsets = [0] * 5
        offsets[0]= tree_cnt
        for i in range(level):
            shift_amount = (level - i - 1) * LOG_CHILD_NUM
            offsets[i+1] = (index >> shift_amount) & 0b111  # 取对应3位二进制值
        return offsets


    def pack_into_64bit(self):
        """
        将所有的16bit数据按顺序每4个打包成一个64位整数，
        如果总数不是4的倍数，则在末尾补0。

        返回：
          words64: list，每个元素为一个64位整数。
        """
        words16 = self.all_words16.copy()
        if len(words16) % 4 != 0:
            words16.extend([0] * (4 - (len(words16) % 4)))
        
        words64 = []
        for i in range(0, len(words16), 4):
            word64 = (words16[i] |
                      (words16[i + 1] << 16) |
                      (words16[i + 2] << 32) |
                      (words16[i + 3] << 48))
            words64.append(word64)
        return words64

    def write_file(self, filename):
        """
        将所有已添加的树的数据打包成64位字，每行一个64位数据，写入指定文件。

        参数：
          filename: 输出文件名。
        """
        words64 = self.pack_into_64bit()
        with open(filename, "w") as f:
            for w in words64:
                f.write("{:016X}\n".format(w))
    
    def write_info_file(self, filename, lod_level):
        """
        将每棵树的详细信息写入指定文件。
        格式示例：
          Tree 1:
            Level 0 - Self Valid:
              1 
            Level 0 - Child Exists:
              1 
            Level 1 - Self Valid:
              1 1 1 1 0 1 0 0 
            Level 1 - Child Exists:
              1 1 1 1 1 1 1 1 
            ...

        参数：
          filename: 输出文件名。
          lod_level: 指定的细节层级
        """
        def format_array(arr):
            """将一维数组按每行8个数字格式化为字符串列表。"""
            lines = []
            for i in range(0, len(arr), 8):
                line = " ".join(str(x) for x in arr[i:i+8])
                lines.append("    " + line)
            return "\n".join(lines)
        
        with open(filename, "w") as f:
            for idx, tree in enumerate(self.trees_info, start=1):
                f.write("Tree {}:\n".format(idx))
                total_levels = tree['total_levels']
                valid = tree['valid']
                child_exist = tree['child_exist']
                for level in range(total_levels):
                    if level <= lod_level:
                        f.write("  Level {} - Self Valid:\n".format(level))
                        f.write(format_array(valid[level]) + "\n\n")
                    if level < lod_level:
                        f.write("  Level {} - Child Exists:\n".format(level))
                        f.write(format_array(child_exist[level]) + "\n\n")
                f.write("\n")
    def process_features(self):
        """
        遍历所有保存的有效anchor记录，根据策略写入feature数据。
        对于每个有效anchor，按以下方式：
          - 根据其 level 和记录的 offsets 计算 pos encode（已记录在 valid_anchor_list 中）。
          - 调用 hash_encode 得到哈希索引，并乘以 9 得到 feature 写入起始地址。
          - 在该起始地址连续写入 9 个64位数据，每个数据最高8位依次写入 1~9，其余位写入 pos encode。
        """
        count =0
        for anchor in self.valid_anchor_list:
            level = anchor['level']
            offsets = anchor['offsets']
            pos_encode = anchor['pos_encode']
            h = hash_encode(level, offsets, hashmap_size=2048)
            final_addr = h * 9
            if(self.feature_memory[final_addr] !=0):
                count += 1
            for k in range(9):
                self.feature_memory[final_addr + k] = ((k + 1) << 56) | pos_encode
        print(count)
    def write_feature_file(self, filename):
        """
        将feature内存数据写入指定文件，每行写入一个64位数据（16进制格式）。

        参数：
          filename: 输出文件名。
        """
        with open(filename, "w") as f:
            for word in self.feature_memory:
                f.write("{:016X}\n".format(word))

# 示例：调用 OCtree 类生成多棵树，并写入SRAM数据、树信息及生成feature数据
if __name__ == "__main__":
    # 定义各层有效anchor数量参数，示例参数
    default_valid_counts = {
        0: 1,   # 层0只有1个anchor，必定有效
        1: 8,   # 层1：8个anchor中5个有效
        2: 8,  # 层2：64个anchor中20个有效
        3: 10,  # 层3：512个anchor中40个有效
        4: 10  # 层4：若存在则全部无效
    }
    
    # 建立 OCtree 生成器实例
    tree_generator = OCtree()
    
    # 添加8棵树（示例中使用 total_levels=5，可根据需要调整）
    for _ in range(8):
        tree_generator.add_tree(default_valid_counts, total_levels=5)
    print(len(tree_generator.valid_anchor_list))
    # 所有树添加结束后，根据保存的有效anchor记录生成 feature 数据
    tree_generator.process_features()
    
    # 将所有树的数据写入文件 "sram.txt"
    tree_generator.write_file("sram.txt")
    # 将树的详细信息写入文件 "tree_info.txt"
    tree_generator.write_info_file("tree_info.txt", 3)
    # 将 feature 数据写入
    tree_generator.write_feature_file("feature.txt")
