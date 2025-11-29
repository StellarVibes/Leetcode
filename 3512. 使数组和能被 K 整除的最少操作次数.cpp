// 思路
// 1.int sum = 0;
// 2.for(auto&e:nums) sum+=e;//求和
// 3.return sum%k;//计算减一的次数
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-operations-to-make-array-sum-divisible-by-k/solutions/3844991/3512-shi-shu-zu-he-neng-bei-k-zheng-chu-6ufmi/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(auto&e:nums) sum+=e;//求和
        return sum%k;//计算减一的次数
    }
};