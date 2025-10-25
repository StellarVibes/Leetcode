// 思路
// 1.int num = s.size()/numRows;
// 2.for(int i = 0;i<s.size();i+=(numRows-2)*2+2)//第一行
// 3.for(int i = 1;i<numRows-1;i++)
//            for(int j = i;j<s.size();j+=(numRows-1)*2) //加6 A    S    G
//                   ret+=s[j];
//                   if(j+(numRows-i-1)*2<s.size())//加(numRows-i-1)*2  L   I
// 4.for(int i = numRows-1;i<s.size();i+=(numRows-2)*2+2) //最后一行
// Code
// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/zigzag-conversion/solutions/3815057/6zzi-xing-bian-huan-by-stellarvibes-pm6p/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size()==1) return s;//边界
        if(numRows==1) return s;
        string ret;
        int num = s.size()/numRows;
        for(int i = 0;i<s.size();i+=(numRows-2)*2+2)//第一行
        {
            ret+=s[i];
        }
        for(int i = 1;i<numRows-1;i++)
        {
            for(int j = i;j<s.size();j+=(numRows-1)*2) //加6 A    S    G
            {
                ret+=s[j];
                std::cout<<s[j]<<" ";
                if(j+(numRows-i-1)*2<s.size())//加(numRows-i-1)*2  L   I
                {
                    ret+=s[j+(numRows-i-1)*2];
                    std::cout<<s[j+(numRows-i-1)*2]<<" ";
                }
            }
            std::cout<<endl;
        }
        for(int i = numRows-1;i<s.size();i+=(numRows-2)*2+2) //最后一行
        {
            ret+=s[i];
        }
        return ret;
    }
};