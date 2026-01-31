// 思路
// 1.vector<int> v(nums.size()); int ret = nums[0];
// 2.v[0]=nums[0];
// 3.for(int i = 1;i<nums.size();i++)
// 4.v[i]=nums[i]+v[i-1]; // 前缀和
// 5.int start = max(0, i - nums[i]);
// 6.ret+=v[i]-v[start]+nums[start]; // nums[start ... i]

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/sum-of-variable-length-subarrays/solutions/3893339/3427-bian-chang-zi-shu-zu-qiu-he-by-stel-z5xd/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int> v(nums.size());
        int ret = nums[0];
        v[0]=nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            v[i]=nums[i]+v[i-1]; // 前缀和
            int start = max(0, i - nums[i]);
            ret+=v[i]-v[start]+nums[start]; // nums[start ... i]
        }
        return ret;
    }
};