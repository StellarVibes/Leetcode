// 思路
// 1.int count = 0;
// 2.for(auto&e:nums) if(e%3!=0) count++; // (1-1)%3==0  (2+1)%3==0
// 3.return count;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/solutions/3838746/3190-shi-suo-you-yuan-su-du-ke-yi-bei-3-vhrni/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(auto&e:nums) if(e%3!=0) count++;// (1-1)%3==0  (2+1)%3==0
        return count;
    }
};