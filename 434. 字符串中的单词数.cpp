// 思路
// 1.for(int i = 0; i < s.size(); i++)
// 2.if((s[i] != ' ' && s[i + 1] == ' ') || (s[i] != ' ' && s[i + 1] == '\0')) count++;
// // 当出现前一个字符不为空格,后一个字符为空格 或者前一个字符不为空格,后一个字符为结束字符时,单词数加1
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/number-of-segments-in-a-string/solutions/3825115/434-zi-fu-chuan-zhong-de-dan-ci-shu-by-s-j50v/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            // 当出现前一个字符不为空格,后一个字符为空格 或者前一个字符不为空格,后一个字符为结束字符时,单词数加1
            if((s[i] != ' ' && s[i + 1] == ' ') || (s[i] != ' ' && s[i + 1] == '\0'))
            {
            count++;
            }
        }
        return count;
    }
};