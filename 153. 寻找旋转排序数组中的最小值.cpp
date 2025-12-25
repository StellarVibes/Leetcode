// 思路
// 1.int left = 0,right = nums.size()-1;
// 2.while(left<right)
// 3.int mid = left +(right-left)/2 ;
// 4.if(nums[mid]>nums[nums.size()-1])left = mid+1; //nums[0]无法处理 mid=0 的边界情况，导致区间收缩错误
// 5.else right = mid;
// 6.return nums[right]; 
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/solutions/3864853/153-xun-zhao-xuan-zhuan-pai-xu-shu-zu-zh-vgwz/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0,right = nums.size()-1;
        while(left<right)
        {
            int mid = left +(right-left)/2 ;
            if(nums[mid]>nums[nums.size()-1])left = mid+1;//nums[0]无法处理 mid=0 的边界情况，导致区间收缩错误
            else right = mid;
        }
        return nums[right]; 
    }
};