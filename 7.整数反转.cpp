// 思路
// 1.string s = to_string(x);//转换成string
// 2.int num =s[i]-'0';
// 3.if(ret*10>INT_MAX) return 0;//判断边界
// 4.ret*=10; ret+=num;
// 5.return flage * ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/reverse-integer/solutions/3815101/7zheng-shu-fan-zhuan-by-stellarvibes-lurj/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);//转换成string
        long long ret = 0;
        int flage = 1;//记录正负
        for(int i = s.size()-1;i>=0;i--)
        {
            if(s[i]=='-')
            {
                flage = -1;
                break;
            }
            int num =s[i]-'0';
            if(ret*10>INT_MAX) return 0;//判断边界
            ret*=10;
            ret+=num;
        }
        return flage * ret;
    }
};