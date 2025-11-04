// 思路
// 1.int tmp = 1,sum = 0;
// 2.while(n)
//             int num = n%10;
//             tmp*=num;//积 sum+=num;//和
//             n/=10;
// 3.return tmp-sum;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/subtract-the-product-and-sum-of-digits-of-an-integer/solutions/3822976/1281-zheng-shu-de-ge-wei-ji-he-zhi-chai-pwocb/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int subtractProductAndSum(int n) {
        int tmp = 1,sum = 0;
        while(n)
        {
            int num = n%10;
            tmp*=num;//积
            sum+=num;//和
            n/=10;
        }
        return tmp-sum;
    }
};