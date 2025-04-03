import random

class OCtree:
    """
    OCtree 类用于管理多棵八叉树的SRAM初始化数据生成。
    
    功能：
      - add_tree()：添加一棵八叉树的数据，根据各层的有效anchor数量生成16bit数据，同时保存详细信息。
      - pack_into_64bit()：将所有添加的16bit数据按顺序每4个合并为一个64位整数。
      - write_file()：将打包好的64位数据写入指定文件，每行一个64位数据（16进制格式）。
      - write_info_file()：将每棵树的详细信息（各层的“自身有效”和“孩子存在”标志）写入指定文件。
    """
    def __init__(self):
        # 存储所有树生成的16bit数据，后续统一打包为64bit数据
        self.all_words16 = []
        # 存储每棵树的详细信息，用于输出额外的树信息文件
        self.trees_info = []
    
    def add_tree(self, level_valid_counts, total_levels=6):
        """
        添加一棵树的数据，并保存详细信息。
        
        参数：
          level_valid_counts: dict，指定各层中“自身有效”anchor数量，
                              如 {0:1, 1:5, 2:10, 3:20, 4:0, 5:0} 表示层0~层5。
          total_levels: 树的层数，默认6层（层0～层5）。
        """
        words16, valid, child_exist, level_total_anchors = self.generate_tree_words16(level_valid_counts, total_levels)
        self.all_words16.extend(words16)
        self.trees_info.append({
            'valid': valid,
            'child_exist': child_exist,
            'total_levels': total_levels,
            'level_total_anchors': level_total_anchors
        })
    
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

    def generate_tree_words16(self, level_valid_counts, total_levels=6):
        """
        根据输入参数生成一棵八叉树的16bit数据列表，并返回各层详细信息。

        参数：
          level_valid_counts: dict，指定各层（0～total_levels-1）中“自身有效”anchor数量，
                              例如 {0:1, 1:5, 2:10, 3:20, 4:0, 5:0} 表示层0~层5的有效anchor数。
          total_levels: 树的层数，默认6层，层编号 0~5。

        返回值：
          words16: list，每个元素为一个16位整数，表示一组8个anchor（每个anchor用2bit：高位为自身有效，低位为孩子存在）。
          valid: dict，每层各anchor的“自身有效”标志数组。
          child_exist: dict，每层各anchor的“孩子存在”标志数组。
          level_total_anchors: dict，每层anchor的总数。
        说明：
          1. 每层的anchor总数：层0为1，其余层为8的幂次（即层i的anchor数为8^i）。
          2. 先根据要求随机生成各层“自身有效”的标志（0或1）。
          3. 再自底向上，根据下一层中对应8个子节点中是否有有效anchor，计算父节点的孩子存在标志。
          4. 最后将每层所有anchor（2bit）按顺序打包为16bit数据（每16bit包含8个anchor，不足补0）。
        """
        # 计算每层的总anchor数，层0单独处理，其余层为8的幂次
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
            # 层0只有一个anchor，直接设为有效
            if level == 0:
                arr[0] = 1
            valid[level] = arr

        # 初始化各层的孩子存在标志数组（与每层anchor数量相同），初始全为0
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
        return words16, valid, child_exist, level_total_anchors

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
    
    def write_info_file(self, filename,lod_level):
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
                    if(level <= lod_level):
                      f.write("  Level {} - Self Valid:\n".format(level))
                      f.write(format_array(valid[level]) + "\n\n")
                    if(level < lod_level):
                      f.write("  Level {} - Child Exists:\n".format(level))
                      f.write(format_array(child_exist[level]) + "\n\n")
                f.write("\n")

# 示例：调用 OCtree 类生成三棵树，并写入两个文件
if __name__ == "__main__":
    # 定义各层有效anchor数量参数，示例参数
    default_valid_counts = {
        0: 1,   # 层0只有1个anchor，必定有效
        1: 5,   # 层1：8个anchor中5个有效
        2: 20,  # 层2：64个anchor中20个有效
        3: 40,  # 层3：512个anchor中40个有效
        4: 0   # 层4：若存在则全部无效（若total_levels大于5，可继续扩展）
    }
    
    # 建立 OCtree 生成器实例
    tree_generator = OCtree()
    
    # 添加三棵树（示例中使用total_levels=5，可根据需要调整）
    tree_generator.add_tree(default_valid_counts, total_levels=5)
    tree_generator.add_tree(default_valid_counts, total_levels=5)
    tree_generator.add_tree(default_valid_counts, total_levels=5)

    # 将所有树的数据写入文件 "sram.txt"
    tree_generator.write_file("sram.txt")
    # 将树的详细信息写入额外的文件 "tree_info.txt"
    tree_generator.write_info_file("tree_info.txt",3)
