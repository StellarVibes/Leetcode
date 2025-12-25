// 思路
// 1.int count = k,len = 0;
// 2.for(int left = 0,right = 0;right<nums.size();right++)
// 3.if(nums[right]==0) 
// 4.if(count>0)  count--; // 翻转 0
// 5.else while(left<=right)  if(nums[left]==0) left++; break;
// 6.left++; // [left,right] 
// 7.len = max(right-left+1,len); // [left,right] 
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/max-consecutive-ones-iii/solutions/3860543/1004-zui-da-lian-xu-1de-ge-shu-iii-by-st-1133/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = k,len = 0;
        for(int left = 0,right = 0;right<nums.size();right++)
        {
            if(nums[right]==0)
            {
                if(count>0) //翻转 0
                {
                    count--;
                }
                else
                {
                    while(left<=right) 
                    {
                        if(nums[left]==0)
                        {
                            left++;
                            break;
                        }
                        left++; // [left,right] 
                    }
                }
            }
            len = max(right-left+1,len); // [left,right] 
        }
        return len;
    }
};