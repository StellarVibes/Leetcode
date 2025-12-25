// 思路
// 1.int sum = 0,len = 0,ret = INT_MAX,left = 0;
// 2.for(int i = 0;i<nums.size();i++)
// 3.sum+=nums[i]; len++;
// 4.while(sum>=target)
// 5.ret = min(ret,len); // 符合条件 保存最小区间
// 6,len--; sum-=nums[left++]; // 缩小区间
// 7.if(ret == INT_MAX) return 0; // 不存在符合条件的子数组返回 0
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-size-subarray-sum/solutions/3860523/209-chang-du-zui-xiao-de-zi-shu-zu-by-st-2urb/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0,len = 0,ret = INT_MAX,left = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i];
            len++;
            while(sum>=target)
            {
                ret = min(ret,len); // 符合条件 保存最小区间
                len--;
                sum-=nums[left++]; //缩小区间
            }
        }
        if(ret == INT_MAX) return 0; //不存在符合条件的子数组返回 0
        return ret;
    }
};