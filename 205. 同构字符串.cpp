// 思路
// 1.if(s.size()!=t.size()) return false;
// 2.int f[50010]={0};//相当于函数f(x) x->f->y
// 3.int exist[50010]={0};//判断是否已经映射后的字符
// 4.for(int i = 0;i<s.size();i++)
//             if(f[s[i]]==0) 
//                 if(exist[t[i]]==0) exist[t[i]]=1; f[s[i]]=t[i];
//                 else return false;//已经存在y 所以有多个x
//             if(f[s[i]]!=t[i]) return false;//一个x映射多个y
// 5.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/isomorphic-strings/solutions/3833256/205-tong-gou-zi-fu-chuan-by-stellarvibes-wt1v/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        int f[50010]={0};//相当于函数f(x) x->f->y
        int exist[50010]={0};//判断是否已经映射后的字符
        for(int i = 0;i<s.size();i++)
        {
            if(f[s[i]]==0) 
            {
                if(exist[t[i]]==0)
                {
                    exist[t[i]]=1;
                    f[s[i]]=t[i];
                }
                else return false;//已经存在y 所以有多个x
            }
            if(f[s[i]]!=t[i]) return false;//一个x映射多个y
        }
        return true;
    }
};