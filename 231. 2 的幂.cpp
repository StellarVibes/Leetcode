// 思路
// 1.for(int i = 0;;i++)
// 2.long long num = pow(2,i);//断该整数是否是 2 的幂次方
// 3.if(num==n) return true;
// 4.else if(num>n) return false;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/power-of-two/solutions/3825556/231-2-de-mi-by-stellarvibes-u2s7/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0;;i++)
        {
            long long num = pow(2,i);//断该整数是否是 2 的幂次方
            if(num==n) return true;
            else if(num>n) return false;
        }
        return true;
    }
};