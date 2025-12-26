// 思路
// 1.if(nums.size()==1) return true;
// 2.int n = INT_MAX; int i = 1;
// 3.for(;i<nums.size();i++)//判断第一对元素是单调递增还是递减
// 4.if(nums[i]-nums[i-1]>0) n = 1; break;
// 5.else if(nums[i]-nums[i-1]<0) n = 0; break;
// 6.if(n==INT_MAX) return true;
// 7.for(;i<nums.size();i++)
//            if((n&&nums[i]-nums[i-1]<0)||(n==0&&nums[i]-nums[i-1]>0)) return false;//判断是否单调
// 8.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/monotonic-array/solutions/3851449/896-dan-diao-shu-lie-by-stellarvibes-2s88/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1) return true;
        int n = INT_MAX;
        int i = 1;
        for(;i<nums.size();i++)//判断第一对元素是单调递增还是递减
        {
            if(nums[i]-nums[i-1]>0)
            {
                n = 1;
                break;
            }
            else if(nums[i]-nums[i-1]<0)
            {
                n = 0;
                break;
            }
        }
        if(n==INT_MAX) return true;
        for(;i<nums.size();i++)
        {
            if((n&&nums[i]-nums[i-1]<0)||(n==0&&nums[i]-nums[i-1]>0)) return false;//判断是否单调
        }
        return true;
    }
};