// 思路
// 1.int len = k; double sum = 0,ret = INT_MIN;//[left,right]
// 2.for(int left = 0,i = 0;i<nums.size();)
// 3.if(len) sum+=nums[i++]; len--;
// 4.if(len==0&&ret<sum/k) ret = sum/k;
//     else len++; sum-=nums[left++];
// 5.return ret==INT_MIN?sum/k:ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-average-subarray-i/solutions/3826897/643-zi-shu-zu-zui-da-ping-jun-shu-i-by-s-lx1m/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int len = k;
        double sum = 0,ret = INT_MIN;//[left,right]
        for(int left = 0,i = 0;i<nums.size();)
        {
            if(len)
            {
                sum+=nums[i++];
                len--;
                if(len==0&&ret<sum/k) ret = sum/k;
            }
            else
            {
                len++;
                sum-=nums[left++];
            }
        }
        return ret==INT_MIN?sum/k:ret;
    }
};