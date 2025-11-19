// 思路
// 1.bool is_majuscule(char ch) //判断是否为大写
//         if(ch>='A'&&ch<='Z') return true;
//         return false;
// 2.bool is_minuscule(char ch) //判断是否为小写
//         if(ch>='a'&&ch<='z') return true;
//         return false;
// 3.if(word.size()==1) return true;
// 4.if(is_majuscule(word[0])) //第一个元素为大写
//             if(is_majuscule(word[1]))
//                 for(int i = 1;i<word.size();i++) if(is_minuscule(word[i])) return false; //全部为大写
//                 return true;
//             else
//                 for(int i = 1;i<word.size();i++) if(is_majuscule(word[i])) return false; //全部为小写
//                 return true;
// 5.else //第一个元素为小写
//         for(int i = 1;i<word.size();i++) if(is_majuscule(word[i])) return false;//全部为小写
//         return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/detect-capital/solutions/3836805/520-jian-ce-da-xie-zi-mu-by-stellarvibes-jt1r/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool is_majuscule(char ch)//判断是否为大写
    {
        if(ch>='A'&&ch<='Z') return true;
        return false;
    }
    bool is_minuscule(char ch)//判断是否为小写
    {
        if(ch>='a'&&ch<='z') return true;
        return false;
    }
    bool detectCapitalUse(string word) {
        if(word.size()==1) return true;
        if(is_majuscule(word[0]))//第一个元素为大写
        {
            if(is_majuscule(word[1]))
            {
                for(int i = 1;i<word.size();i++)//全部为大写
                {
                    if(is_minuscule(word[i])) return false;
                }
                return true;
            }
            else
            {
                for(int i = 1;i<word.size();i++)//全部为小写
                {
                    if(is_majuscule(word[i])) return false;
                }
                return true;
            }
        }
        else//第一个元素为小写
        {
            for(int i = 1;i<word.size();i++)//全部为小写
            {
                if(is_majuscule(word[i])) return false;
            }
            return true;
        }
        
    }
};