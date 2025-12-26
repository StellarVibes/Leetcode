// 思路
// 1.int count = 0;    // 记录符合条件的子数组个数
// 2.int pre_sum = 0;  // 前缀和（从数组开头到当前位置的和）
// 3.unordered_map<int, int> pre_map;
// 4.pre_map[0] = 1;   // 初始化：前缀和为0的情况出现1次（处理从数组开头的子数组）
// 5.for (int num : nums) pre_sum += num; 
//             if(pre_map.count(pre_sum - k)) count += pre_map[pre_sum - k];// 统计前缀和pre_sum - k的个数
//             pre_map[pre_sum]++;// 将当前前缀和存入哈希表（先查询再存入，避免匹配到自己）
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/subarray-sum-equals-k/solutions/3866735/560-he-wei-k-de-zi-shu-zu-by-stellarvibe-cfa5/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;    // 记录符合条件的子数组个数
        int pre_sum = 0;  // 前缀和（从数组开头到当前位置的和）
        unordered_map<int, int> pre_map;
        pre_map[0] = 1;   // 初始化：前缀和为0的情况出现1次（处理从数组开头的子数组）

        for (int num : nums) 
        {
            pre_sum += num; 
            if(pre_map.count(pre_sum - k)) count += pre_map[pre_sum - k];// 统计前缀和pre_sum - k的个数
            pre_map[pre_sum]++;// 将当前前缀和存入哈希表（先查询再存入，避免匹配到自己）
        }

        return count;
    }
};