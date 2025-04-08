import numpy as np

def encode_to_bits(level, offsets):
    """将level和offsets编码为18位二进制数（3*6=18位）
    
    Args:
        level: 有效offset的层级数 (0-5)
        offsets: 包含5个offset值的列表，每个值范围为0-5
        
    Returns:
        18位二进制编码
    """
    # 确保输入合法
    assert 0 <= level <= 5, "Level should be between 0 and 5"
    assert len(offsets) == 5, "Should have 5 offsets"
    for offset in offsets:
        assert 0 <= offset <= 5, "Each offset should be between 0 and 5"
    
    # 转换为18位编码
    encoded = level
    for i, offset in enumerate(offsets):
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

def hash_encode(level, offsets, hashmap_size=2048):
    """根据level和offsets计算哈希值
    
    Args:
        level: 有效offset的层级数
        offsets: 包含5个offset值的列表
        hashmap_size: 哈希表大小
        
    Returns:
        哈希索引
    """
    # 只考虑前level层的offset
    valid_offsets = offsets[:level+1]


    # 计算多维索引
    index = 0
    stride = 1
    resolution = 8  # 每个offset可以是0-7，共8个可能的值
    if(level >= 2):
        index = fast_hash(valid_offsets) % hashmap_size + 72
    else:
    # 计算有序索引
      for d in range(len(valid_offsets)):
          index += (valid_offsets[d]+1) * stride
          stride *= resolution
    
    return index 

def fast_hash(pos_grid):
    """快速哈希函数
    
    Args:
        pos_grid: 位置网格
        
    Returns:
        哈希值
    """
    # 质数表
    primes = [1, 2654435, 807545, 3867465, 2099719]
    print(pos_grid)
    
    result = 0
    for i in range(len(pos_grid)):
        result ^= (pos_grid[i]+1) * primes[i % len(primes)]
        print(result)
    
    return result

# 测试示例
def test_hash():
    data1_level = 2
    data1_offsets = [0, 0, 3, 0, 0]
    
    data2_level = 4
    data2_offsets = [1, 7, 7, 7, 7]
    
    hash1 = hash_encode(data1_level, data1_offsets)
    hash2 = hash_encode(data2_level, data2_offsets)
    
    print(f"Data 1 - Level: {data1_level}, Offsets: {data1_offsets}, Hash: {hash1}")
    print(f"Data 2 - Level: {data2_level}, Offsets: {data2_offsets}, Hash: {hash2}")
    print(f"Hashes are equal: {hash1 == hash2}")
    
    # 额外测试不同level的情况
    data3_level = 3
    data3_offsets = [0, 1, 7, 3, 4]
    hash3 = hash_encode(data3_level, data3_offsets)
    
    print(f"Data 3 - Level: {data3_level}, Offsets: {data3_offsets}, Hash: {hash3}")
    print(f"Hashes 1 and 3 are equal: {hash1 == hash3}")

if __name__ == "__main__":
    test_hash()