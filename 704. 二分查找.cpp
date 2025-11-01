// 思路
// 1.int left = 0,right = nums.size()-1;
// 2.while(left<right) int mid = (left+right)>>1;//除2
// 3.if(nums[mid]<target) left = mid+1;//mid偏左 left要多加1 
// 4.else if(nums[mid]>target) right = mid;
// 5.else return mid;
// 6.if(nums[left]==target) return left;//left==right时 while为假
// 7.return -1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/binary-search/solutions/3820732/704-er-fen-cha-zhao-by-stellarvibes-acc4/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0,right = nums.size()-1;
        while(left<right)
        {
            int mid = (left+right)>>1;//除2
            if(nums[mid]<target)
                left = mid+1;//mid偏左 left要多加1 
            else if(nums[mid]>target)
                right = mid;
            else return mid;
        }
        if(nums[left]==target) return left;//left==right时 while为假
        return -1;
    }
};