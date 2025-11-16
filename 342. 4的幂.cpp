// 思路
// 1.if(n<=0) return false;
// 2.for(unsigned long long i = 1;i<=n;i*=4) //判断是否是4的幂次方
//             if(n==i) return true;
// 3.return false;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/power-of-four/solutions/3832922/342-4de-mi-by-stellarvibes-g3ee/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        for(unsigned long long i = 1;i<=n;i*=4)//判断是否是4的幂次方
        {
            if(n==i) return true;
        }
        return false;
    }
};