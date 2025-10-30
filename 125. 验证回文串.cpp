// 思路
// 1.for(auto &e:s)//移除所有非字母数字字符
// 2.if(e>='a'&&e<='z') ret+=e;
// 3.else if(e>='A'&&e<='Z') ret+=e+32;//大写字符转换为小写字符
// 4.else if(e>='0'&&e<='9') ret+=e;
// 5.int left = 0,right = ret.size()-1;
// 6.while(left<right) if(ret[left++]!=ret[right--]) return false;//比较是否相同 
// 7.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/valid-palindrome/solutions/3819588/125-yan-zheng-hui-wen-chuan-by-stellarvi-1vvp/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ") return true;
        string ret;
        for(auto &e:s)//移除所有非字母数字字符
        {
            if(e>='a'&&e<='z') ret+=e;
            else if(e>='A'&&e<='Z') ret+=e+32;//大写字符转换为小写字符
            else if(e>='0'&&e<='9') ret+=e;
        }
        int left = 0,right = ret.size()-1;
        while(left<right)
        {
            if(ret[left++]!=ret[right--]) return false;//比较是否相同 
        }
        return true;
    }
};