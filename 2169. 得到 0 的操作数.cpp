// 思路
// 1.while(!(num1==0||num2==0))//返回使num1 = 0 或 num2 = 0 的操作数
// 2.if(num1>=num2) num1-=num2;
// 3.else num2-=num1;
// 4.count++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-operations-to-obtain-zero/solutions/3826998/2169-de-dao-0-de-cao-zuo-shu-by-stellarv-xngu/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        while(!(num1==0||num2==0))//返回使num1 = 0 或 num2 = 0 的操作数
        {
            if(num1>=num2)
            {
                num1-=num2;
            }
            else
            {
                num2-=num1;
            }
            count++;
        }
        return count;
    }
};