// 思路
// 1.sort(nums.begin(),nums.end());
// 2.if(nums.size()==k) return nums[nums.size()-1]-nums[0];
// 3.int ret = INT_MAX;
// 4.for(int i = k-1;i<nums.size();i++)
// 5.ret=min(ret,nums[i]-nums[i-k+1]); // 一个区间最高分和最低分的差值

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-difference-between-highest-and-lowest-of-k-scores/solutions/3888744/1984-xue-sheng-fen-shu-de-zui-xiao-chai-luy8g/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(nums.size()==k) return nums[nums.size()-1]-nums[0];
        int ret = INT_MAX;
        for(int i = k-1;i<nums.size();i++)
        {
            ret=min(ret,nums[i]-nums[i-k+1]); // 一个区间最高分和最低分的差值
        }
        return ret;
    }
};