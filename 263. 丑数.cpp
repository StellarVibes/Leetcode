// 思路
// 1.if (n <= 0) return false;//不符合题目正整数的要求
// 2.while (n % 3 == 0) n /= 3;//去掉n中的为3的因子
// 3.while (n % 5 == 0) n /= 5;//去掉n中的为5的因子
// 4.return (n & (n - 1)) == 0;//判断n中的是否只剩下2的因子
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/ugly-number/solutions/3826612/263-chou-shu-by-stellarvibes-hciy/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;//不符合题目正整数的要求
        while (n % 3 == 0) n /= 3;//去掉n中的为3的因子
        while (n % 5 == 0) n /= 5;//去掉n中的为5的因子
        return (n & (n - 1)) == 0;//判断n中的是否只剩下2的因子
    }
};