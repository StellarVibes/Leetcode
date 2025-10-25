// 思路
// 1.for(int i = 0;i<s.size()-1;i++)// i<s.size()-1处理"bb"边界问题
// 2.while(left>=0&&right<s.size()&&s[left]==s[right])// "bab" 类型
// 3.while(left>=0&&right<s.size()&&s[left]==s[right])// "bb" 类型
// 4.tmp = right-left-1;
// 5.ret = s.substr(max(0,left+1),tmp);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/longest-palindromic-substring/solutions/3815033/5zui-chang-hui-wen-zi-chuan-by-stellarvi-feme/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution 
public:
    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        string ret;
        int tmp = 0;
        for(int i = 0;i<s.size()-1;i++)// i<s.size()-1处理"bb"边界问题
        {
            int left = i,right = i;
            while(left>=0&&right<s.size()&&s[left]==s[right])// "bab" 类型
            {
                left--;
                right++;
            }
            if(tmp<right-left-1)
            {
                tmp = right-left-1;
                ret = s.substr(max(0,left+1),tmp);
            }
            left = i,right = i+1;
            while(left>=0&&right<s.size()&&s[left]==s[right])// "bb" 类型
            {
                left--;
                right++;
            }
            if(tmp<right-left-1)
            {
                tmp = right-left-1;
                ret = s.substr(max(0,left+1),tmp);//处理边界
            }
        }
        return ret;
    }
};
