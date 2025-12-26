// 思路
// 1.int count = 0;
// 2.for(int c = n;c>2;c--) // c>b&&c>a 从右向左
// 3.for(int b = c-1;b>1;b--)
// 4.for(int a = 1;a<b;a++)
//           if(a*a+b*b==c*c) count++; //a^2 + b^2 = c^2
//           else if(a*a+b*b>c*c) break;
// 5.return count*2; // (a,b)  (b,a)
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-square-sum-triples/solutions/3851454/1925-tong-ji-ping-fang-he-san-yuan-zu-de-s7wf/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int c = n;c>2;c--)// c>b&&c>a 从右向左
        {
            for(int b = c-1;b>1;b--)
            {
                for(int a = 1;a<b;a++)
                {
                    if(a*a+b*b==c*c) count++;//a^2 + b^2 = c^2
                    else if(a*a+b*b>c*c) break;
                }
            }
        }
        return count*2;// (a,b) (b,a)
    }
};