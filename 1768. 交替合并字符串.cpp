// 思路
// 1.string ret; int n = min(word1.size(),word2.size()),i = 0;
// 2.for(;i<n;i++)
//             ret.push_back(word1[i]); ret.push_back(word2[i]); //交替添加字母
// 3.if(word1.size()>word2.size()) //多出来的字母追加到合并后字符串的末尾
//             for(;i<word1.size();i++) ret.push_back(word1[i]);
// 4.else if(word1.size()<word2.size())
//             for(;i<word2.size();i++) ret.push_back(word2[i]);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/merge-strings-alternately/solutions/3851421/1768-jiao-ti-he-bing-zi-fu-chuan-by-stel-kcsz/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ret;
        int n = min(word1.size(),word2.size()),i = 0;
        for(;i<n;i++)
        {
            ret.push_back(word1[i]); //交替添加字母
            ret.push_back(word2[i]);
        }
        if(word1.size()>word2.size())//多出来的字母追加到合并后字符串的末尾
        {
            for(;i<word1.size();i++)
                ret.push_back(word1[i]);
        }
        else if(word1.size()<word2.size())
        {
            for(;i<word2.size();i++)
                ret.push_back(word2[i]);
        }
        return ret;
    }
};