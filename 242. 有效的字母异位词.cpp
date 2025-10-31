// 思路
// 1.if(s.size()!=t.size()) return false;
// 2.sort(s.begin(),s.end()); sort(t.begin(),t.end());
// 3.for(int i = 0;i<s.size();i++) if(s[i]!=t[i]) return false;
// 4.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/valid-anagram/solutions/3820035/242-you-xiao-de-zi-mu-yi-wei-ci-by-stell-kkrs/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};