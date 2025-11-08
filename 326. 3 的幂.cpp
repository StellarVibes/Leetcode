// 思路
// 1.for(int i = 0;;i++)
// 2.long long num = pow(3,i);//断该整数是否是 3 的幂次方
// 3.if(num==n) return true; else if(num>n) return false;
// 4.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/power-of-three/solutions/3826587/326-3-de-mi-by-stellarvibes-8eq2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i = 0;;i++)
        {
            long long num = pow(3,i);//断该整数是否是 3 的幂次方
            if(num==n) return true;
            else if(num>n) return false;
        }
        return true;
    }
};