// 思路
// 1.for(long long i = 1;i<=x/2+1;i++)//long long i 溢出 i<=x/2+1 x==1
// 2.if((long long)i*i==(long long)x) return i;//溢出
//     else if ((long long)i*i>x) return i-1;//溢出 8的算术平方根是2.82842...,由于返回类型是整数,小数部分将被舍去 所以说大于x的前一个数
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/sqrtx/solutions/3817978/69xde-ping-fang-gen-by-stellarvibes-hhl0/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int mySqrt(int x) {
        for(long long i = 1;i<=x/2+1;i++)//long long i 溢出 i<=x/2+1 x==1
        {
            if((long long)i*i==(long long)x) return i;//溢出
            else if ((long long)i*i>x) return i-1;//溢出 8的算术平方根是2.82842...,由于返回类型是整数,小数部分将被舍去 所以说大于x的前一个数
        }
        return 0;
    }
};