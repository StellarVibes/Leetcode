// 思路
// 1.int ret = 0,i =0;
// 2.do{ int num = n%2;
// 3.if(num==0) num = 1; else num = 0;
// 4.ret+=num*pow(2,i); i++;
// 5.n/=2; }while(n);
// 6.return ret;

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/complement-of-base-10-integer/solutions/3931284/1009-shi-jin-zhi-zheng-shu-de-fan-ma-by-fq8or/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

Code
class Solution {
public:
    int bitwiseComplement(int n) {
        int ret = 0,i =0;
        do{
            int num = n%2;
            if(num==0) num = 1;
            else num = 0;
            ret+=num*pow(2,i);
            i++;
            n/=2;
        }while(n);
        return ret;
    }
};