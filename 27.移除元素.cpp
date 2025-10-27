// 思路
// 1.for(int right = nums.size()-1;right>=left;) //[0,left)为有效值
// 2.if(nums[left]!=val) left++; //等于val时left++
// 3.else swap(nums[left],nums[right]); right--; //left 不变 swap可能为无效值
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/remove-element/solutions/3816774/27yi-chu-yuan-su-by-stellarvibes-ksat/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        for(int right = nums.size()-1;right>=left;)//[0,left)为有效值
        {
            if(nums[left]!=val) left++;//等于val时left++
            else //left 不变 swap可能为无效值
            {
                swap(nums[left],nums[right]);
                right--;
            }
        }
        return left;
    }
};