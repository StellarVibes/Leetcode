// 思路
// 1.int size = nums.size();
// 2.for(int i = 0;i<size;i++) nums.push_back(nums[i]);
// 3.return nums;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/concatenation-of-array/solutions/3837128/q1-shu-zu-chuan-lian-by-stellarvibes-vnlu/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0;i<size;i++) nums.push_back(nums[i]);
        return nums;
    }
};