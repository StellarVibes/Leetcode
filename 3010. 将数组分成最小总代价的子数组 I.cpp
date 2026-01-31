// 思路
// 1.sort(nums.begin()+1,nums.end()); // 排序选出后最小值
// 2.return nums[0]+nums[1]+nums[2]; // nums 分成 3 个连续且没有交集的子数组

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/divide-an-array-into-subarrays-with-minimum-cost-i/solutions/3893470/3010-jiang-shu-zu-fen-cheng-zui-xiao-zon-4dop/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1,nums.end()); // 排序选出后最小值
        return nums[0]+nums[1]+nums[2]; // nums 分成 3 个 连续且没有交集 的子数组
    }
};