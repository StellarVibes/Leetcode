// 思路
// 1.unordered_set<char> set; int count = 0;
// 2.char arr[]={'a','e','i','o','u'};//元音字母
// 3.for(auto&e:arr) set.insert(e);
// 4.while(left<=right)
//             string s = words[left];
//             if(set.count(s[0])&&set.count(s[s.size()-1])) count++;//判断字符串是否以元音字母开头并以元音字母结尾
//             left++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-the-number-of-vowel-strings-in-range/solutions/3826836/2586-tong-ji-fan-wei-nei-de-yuan-yin-zi-vhjmp/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        unordered_set<char> set;
        int count = 0;
        char arr[]={'a','e','i','o','u'};//元音字母
        for(auto&e:arr) set.insert(e);
        while(left<=right)
        {
            string s = words[left];
            if(set.count(s[0])&&set.count(s[s.size()-1])) count++;//判断字符串是否以元音字母开头并以元音字母结尾
            left++;
        }
        return count;
    }
};