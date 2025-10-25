// 思路
// 1.if(s.size()==0) return 0;//防止越界
// 2.while(tmp&&s[i]==' '&&i<s.size())//处理' ' 并且tmp==1即前置' '
// 3.while(tmp&&i+1<s.size()&&s[i]=='0'&&s[i+1]=='0')//处理'0' 并且tmp==1即前置'0'
// 4.if(s[i]=='-'&&tmp) {flage = -1;tmp = 0;}//处理- tmp用于处理+-12 -+12 return 0
//     else if(s[i]=='+'&&tmp) {tmp = 0;continue;}//处理+
//      else if(s[i]<'0'||s[i]>'9') break;//处理123a 123-
// 5.if(s[i]>='0'&&s[i]<='9')
// 6.ret*=10;ret+=s[i]-'0';tmp = 0;
// 7.if(flage==-1 && ret > 2147483647) {return INT_MIN;}//特殊边界处理
//     else if(flage==-1 && ret >= 2147483647) {return flage * ret;}
//     else if(ret >= 2147483647){return INT_MAX;}
// 8.return flage * ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/string-to-integer-atoi/solutions/3815242/8zi-fu-chuan-zhuan-huan-zheng-shu-atoi-b-mj5w/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;//防止越界
        long long flage = 1,ret = 0,tmp = 1;
        for(int i = 0;i<s.size();i++)
        {
            while(tmp&&s[i]==' '&&i<s.size())//处理' ' 并且tmp==1即前置' '
            {
                i++;
            }
            while(tmp&&i+1<s.size()&&s[i]=='0'&&s[i+1]=='0')//处理'0' 并且tmp==1即前置'0'
            {
                i++;
            }
            if(i<s.size())
            {
                if(s[i]=='-'&&tmp) {flage = -1;tmp = 0;}//处理- tmp用于处理+-12 -+12 return 0
                else if(s[i]=='+'&&tmp) {tmp = 0;continue;}//处理+
                else if(s[i]<'0'||s[i]>'9') break;//处理123a 123-
                if(s[i]>='0'&&s[i]<='9')
                {
                    ret*=10;
                    ret+=s[i]-'0';
                    tmp = 0;
                    if(flage==-1 && ret > 2147483647) {return INT_MIN;}//特殊边界处理
                    else if(flage==-1 && ret >= 2147483647) {return flage * ret;}
                    else if(ret >= 2147483647){return INT_MAX;}
                }
            }
        }
        return flage * ret;
    }
};