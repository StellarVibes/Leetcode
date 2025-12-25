// 思路
// 1.if(nums.size()==1) return 0;
// 2.int left = 0,right = nums.size()-1;
// 3.while(left<right)
// 4.int mid = left+(right-left)/2 +1;
// 5.if(nums[mid]>nums[mid-1]) left = mid;
// 6.else right = mid -1;// right 逐渐接近最高点
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-peak-element/solutions/3864553/162-xun-zhao-feng-zhi-by-stellarvibes-af4r/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int left = 0,right = nums.size()-1;
        while(left<right)
        {
            int mid = left+(right-left)/2 +1;
            if(nums[mid]>nums[mid-1]) left = mid;
            else right = mid -1;// right 逐渐接近最高点
        }
        return left;
    }
};