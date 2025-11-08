// 思路
// 1.vector<int> ret; int tmp = 0;
// 2.while(n<nums.size())
// 3.ret.push_back(nums[tmp++]); //x
// 4.ret.push_back(nums[n++]); //y
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/shuffle-the-array/solutions/3826710/1470-zhong-xin-pai-lie-shu-zu-by-stellar-k04v/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ret;
        int tmp = 0;
        while(n<nums.size())
        {
            ret.push_back(nums[tmp++]); //x
            ret.push_back(nums[n++]); //y
        }
        return ret;
    }
};