// 思路
// 1.int n = nums.size(); vector<int> result(n);
// 2.for(int i = 0;i<nums.size();i++)
// 3.result[i]=nums[(i+(n+nums[i]%n))%n]; 
// // nums[i]%n -> 去除重复整数  
// // n+nums[i]%n -> 防止左边界越界 
// // i+(n+nums[i]%n))%n -> 防止右边界越界

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/transformed-array/solutions/3896911/3379-zhuan-huan-shu-zu-by-stellarvibes-h7bq/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        for(int i = 0;i<nums.size();i++)
        {
            result[i]=nums[(i+(n+nums[i]%n))%n]; // nums[i]%n -> 去除重复整数  n+nums[i]%n -> 防止左边界越界 i+(n+nums[i]%n))%n -> 防止右边界越界
        }
        return result;
    }
};