// 思路
// 1.k%=nums.size();
// 2.int n = nums.size()-k;
// 3.reverse(nums.begin(),nums.begin()+n); // [4,3,2,1,5,6,7]
// 4.reverse(nums.begin()+n,nums.end()); // [4,3,2,1,7,6,5]
// 5.reverse(nums.begin(),nums.end()); // [5,6,7,1,2,3,4]
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/rotate-array/solutions/3873685/189-lun-zhuan-shu-zu-by-stellarvibes-69lg/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        int n = nums.size()-k;
        reverse(nums.begin(),nums.begin()+n); // [4,3,2,1,5,6,7]
        reverse(nums.begin()+n,nums.end()); // [4,3,2,1,7,6,5]
        reverse(nums.begin(),nums.end()); // [5,6,7,1,2,3,4]
    }
};