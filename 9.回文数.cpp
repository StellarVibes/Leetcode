// 思路
// 1.for(int left = 0,right = s.size()-1;left<s.size()&&right>=0;left++,right--)//left从左往右 right从右往左
// 2.if(s[left]!=s[right]) return false;//判断是否相等
// Code
// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/palindrome-number/solutions/3815248/9hui-wen-shu-by-stellarvibes-najq/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        for(int left = 0,right = s.size()-1;left<s.size()&&right>=0;left++,right--)//left从左往右 right从右往左
        {
            if(s[left]!=s[right]) return false;//判断是否相等
        }
        return true;
    }
};