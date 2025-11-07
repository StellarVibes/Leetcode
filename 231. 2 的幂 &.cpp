// 思路
// 1.if(n<=0) return false; //2^x 大于零
// 2.int count = 0,num = 31; //-2^31 <= n <= 2^31 - 1
// 3.while(num--) count+=n&0x01; n=n>>1; //按位与
// 4.return count==1;//只有一个1才是2的幂次方
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/power-of-two/solutions/3825563/231-2-de-mi-by-stellarvibes-xyec/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // for(int i = 0;;i++)
        // {
        //     long long num = pow(2,i);//断该整数是否是 2 的幂次方
        //     if(num==n) return true;
        //     else if(num>n) return false;
        // }
        // return true;
        if(n<=0) return false; //2^x 大于零
        int count = 0,num = 31; //-2^31 <= n <= 2^31 - 1
        while(num--)
        {
            count+=n&0x01; //按位与
            n=n>>1;
        }
        return count==1;//只有一个1才是2的幂次方
    }
};