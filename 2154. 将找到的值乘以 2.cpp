// 思路
// 1.sort(nums.begin(),nums.end());//排序
// 2.for(auto&e:nums)
//             if(e==original) original*=2;//找到original,将original乘以2
// 3.return original;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/keep-multiplying-found-values-by-two/solutions/3835899/2154-jiang-zhao-dao-de-zhi-cheng-yi-2-by-mv5x/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());//排序
        for(auto&e:nums)
        {
            if(e==original) original*=2;//找到original,将original乘以2
        }
        return original;
    }
};