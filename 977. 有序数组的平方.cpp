// 思路
// 1.for(auto&e:nums) e=abs(e)*abs(e);
// 2.sort(nums.begin(),nums.end());
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/squares-of-a-sorted-array/solutions/3822752/977-you-xu-shu-zu-de-ping-fang-by-stella-hosk/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto&e:nums)
            e=abs(e)*abs(e);
        sort(nums.begin(),nums.end());
        return nums;
    }
};