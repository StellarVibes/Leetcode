// 思路
// 1.vector<int> dp; int sum = 0;
// 2.for(auto &e:nums)// 前缀和
// 3.sum+=e;
// 4.dp.push_back(sum);
// 5.return dp;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/running-sum-of-1d-array/solutions/3873664/1480-yi-wei-shu-zu-de-dong-tai-he-by-ste-c523/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> dp;
        int sum = 0;
        for(auto &e:nums)// 前缀和
        {
            sum+=e;
            dp.push_back(sum);
        }
        return dp;
    }
};