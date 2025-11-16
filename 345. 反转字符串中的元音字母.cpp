// 思路
// 1.unordered_set<char> set{'a','e','i','o','u','A','E','I','O','U'};//保存元音字母大小写
// 2. int left = 0,right = s.size()-1;
// 3.while(left<right)
// 4.while(left<right&&!set.count(s[left])) left++;//跳过非元音字母
// 5.while(left<right&&!set.count(s[right])) right--;
// 6.if(left<right) swap(s[left],s[right]);//交换
// 7.left++; right--;
// 8.return s;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/reverse-vowels-of-a-string/solutions/3832932/345-fan-zhuan-zi-fu-chuan-zhong-de-yuan-c5pyt/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> set{'a','e','i','o','u','A','E','I','O','U'};//保存元音字母大小写
        int left = 0,right = s.size()-1;
        while(left<right)
        {
            while(left<right&&!set.count(s[left])) left++;//跳过非元音字母
            while(left<right&&!set.count(s[right])) right--;
            if(left<right) swap(s[left],s[right]);//交换
            left++;
            right--;
        }
        return s;
    }
};