// 思路
// 1.if(nums.size()==0) return {-1,-1};
// 2.int left = 0,right = nums.size()-1; vector<int> v;
// 3.while(left<right) int mid = left+(right-left)/2;
//             if(nums[mid]<target) left = mid + 1;
//             else if(nums[mid]>=target) right = mid; //right 逐渐接近第一个target [<target,>=target]
// 4.v.push_back(nums[left]==target?left:-1);
// 5.left = 0,right = nums.size()-1;
// 6.while(left<right) int mid = left+(right-left)/2 +1;
//             if(nums[mid]<=target) left = mid;
//             else if(nums[mid]>target) right = mid - 1; //left 逐渐接近最后一个target [<=target,>target]
// 7. v.push_back(nums[left]==target?left:-1);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/solutions/3864282/34-zai-pai-xu-shu-zu-zhong-cha-zhao-yuan-6ci9/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int left = 0,right = nums.size()-1;
        vector<int> v;
        while(left<right)
        {
            int mid = left+(right-left)/2;
            if(nums[mid]<target) left = mid + 1;
            else if(nums[mid]>=target) right = mid;//right 逐渐接近第一个target [<target,>=target]
        }
        v.push_back(nums[left]==target?left:-1);
        left = 0,right = nums.size()-1;
        while(left<right)
        {
            int mid = left+(right-left)/2 +1;
            if(nums[mid]<=target) left = mid;//left 逐渐接近最后一个target [<=target,>target]
            else if(nums[mid]>target) right = mid - 1;
        }
        v.push_back(nums[left]==target?left:-1);
        return v;
    }
};