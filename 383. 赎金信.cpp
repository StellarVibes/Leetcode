// 思路
// 1.if(ransomNote.size()>magazine.size()) return false;//magazine中的每个字符只能在ransomNote中使用一次
// 2.int r[26]={0}; int m[26]={0};
// 3.for(auto&e:ransomNote) r[e-'a']++; for(auto&e:magazine) m[e-'a']++;//计算元素个数
// 4.for(int i = 0;i<26;i++)
//             if(r[i]>m[i]) return false;//ransomNote的同一元素的个数需要小于等于magazine的个数
// 5.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/ransom-note/solutions/3836203/383-shu-jin-xin-by-stellarvibes-q13x/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;//magazine中的每个字符只能在ransomNote中使用一次
        int r[26]={0};
        int m[26]={0};
        for(auto&e:ransomNote) r[e-'a']++;
        for(auto&e:magazine) m[e-'a']++;//计算元素个数
        for(int i = 0;i<26;i++)
        {
            if(r[i]>m[i]) return false;//ransomNote的同一元素的个数需要小于等于magazine的个数
        }
        return true;
    }
};