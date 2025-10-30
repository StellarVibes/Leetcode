// 思路
// 1.int count= 0;
// 2.while(n) count+=n&0x01;//计算最右位是否为1  n=n>>1;//右移一位
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/number-of-1-bits/solutions/3819763/191-wei-1de-ge-shu-by-stellarvibes-myej/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int hammingWeight(int n) {
        int count= 0;
        while(n)
        {
            count+=n&0x01;//计算最右位是否为1
            n=n>>1;//右移一位
        }
        return count;
    }
};