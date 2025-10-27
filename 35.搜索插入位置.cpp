// 思路
// 1.int mid = (left+right)/2+1;                                //+1是为了让mid偏向右 当left = 1, right = 2                          
// 2.if(nums[mid]<target) left = mid;                   //如果nums[1]<target那么left = mid = 1,left 没变                         
// 3.else if(nums[mid]>target) right = mid -1;   //下一轮还是  left = 1, right = 2 ，死循环
// 4.else return mid;
// 5.return left+1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/search-insert-position/solutions/3817052/35sou-suo-cha-ru-wei-zhi-by-stellarvibes-1bhn/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]) return nums.size();
        if(target<nums[0]) return 0;
        if(target==nums[0]) return 0;
        int left = 0,right = nums.size()-1;
        while(left<right)
        {
            int mid = (left+right)/2+1;//+1是为了让mid偏向右 当left = 1, right = 2                          
            if(nums[mid]<target)       //如果nums[1]<target那么left = mid = 1,left 没变
            {                          //下一轮还是  left = 1, right = 2 ，死循环
                left = mid;
            }
            else if(nums[mid]>target)       
            {                          
                right = mid -1;
            }
            else return mid;
        }
        return left+1;
    }
};