// 思路
// 1.for(int left=0,right = s.size()-1;left<right;)//遇到字母进行交换
// 2.while(left<right&&!(s[left]>='a'&&s[left]<='z')&&!(s[left]>='A'&&s[left]<='Z')) left++;
// 3.while(left<right&&!(s[right]>='a'&&s[right]<='z')&&!(s[right]>='A'&&s[right]<='Z')) right--;
// 4.swap(s[left++],s[right--]);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/reverse-only-letters/solutions/3822745/917-jin-jin-fan-zhuan-zi-mu-by-stellarvi-hyyk/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string reverseOnlyLetters(string s) {
        for(int left=0,right = s.size()-1;left<right;)//遇到字母进行交换
        {
            while(left<right&&!(s[left]>='a'&&s[left]<='z')&&!(s[left]>='A'&&s[left]<='Z')) left++;
            while(left<right&&!(s[right]>='a'&&s[right]<='z')&&!(s[right]>='A'&&s[right]<='Z')) right--;
            swap(s[left++],s[right--]);
        }
        return s;
    }
};