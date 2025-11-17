// 思路
// 1.for(int i = 0;i<nums.size();i++)
// 2.if(nums[i]==1)
//            if(prev!=INT_MIN&&ret>i-prev-1) ret = i-prev-1;//计算区间个数
//            prev = i;//更新前一个1的位置
// 3.if(ret<k) return false;
// 4.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/check-if-all-1s-are-at-least-length-k-places-away/solutions/3833976/1437-shi-fou-suo-you-1-du-zhi-shao-xiang-87or/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int ret = INT_MAX,prev = INT_MIN;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                if(prev!=INT_MIN&&ret>i-prev-1) ret = i-prev-1;//计算区间个数
                prev = i;//更新前一个1的位置
            }
            if(ret<k) return false;
        }
        return true;
    }
};