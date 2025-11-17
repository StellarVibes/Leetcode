// 思路
// 1.for(int begin = 0,end = 0;end<nums.size();)
// 2.if(end<nums.size()&&nums[end]!=0)//非零元素
// 3.if(begin!=end) 
//           swap(nums[begin],nums[end]);//交换
// 4.begin++; end++;
// 5.else end++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/move-zeroes/solutions/3833961/283-yi-dong-ling-by-stellarvibes-spgm/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int begin = 0,end = 0;end<nums.size();)
        {
            if(end<nums.size()&&nums[end]!=0)//非零元素
            {
                if(begin!=end)
                    swap(nums[begin],nums[end]);//交换
                begin++;
                end++;
            }
            else end++;
        }
    }
};