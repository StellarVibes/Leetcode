// 思路
// 1.int sum=0,n = nums.size();
// 2.for(auto&e:nums) sum+=e;
// 3.return (n+1)*n/2-sum; //[0,n]的和为n*(a1+an)/2
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/missing-number/solutions/3833100/268-diu-shi-de-shu-zi-by-stellarvibes-briw/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n = nums.size();
        for(auto&e:nums) sum+=e;
        return (n+1)*n/2-sum;//[0,n]的和为n*(a1+an)/2
    }
};