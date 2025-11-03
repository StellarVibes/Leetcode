思路
1.// 阶段 1：计算总长度
   // 从左到右遍历字符串  s ，根据字符类型更新解码后的字符串总长度  len ：
   // 如果是数字  d ，则  len *= d （表示当前字符串重复  d  次）。
   // 如果是字母，则  len += 1 。
2.// 阶段 2：反向定位第  k  个字符
   // 从右向左遍历字符串  s ，逐步缩小  len  并调整  k ：
   // k %= len ：将  k  映射到当前周期内的等效位置。
   // 如果  k == 0  且当前字符是字母，说明这个字母就是第  k  个字符，直接返回。
   // 如果是数字，则  len /= d ，回退到重复前的长度。
    // 如果是字母，则  len -= 1 。
3.unsigned long long len = 0;
        int i = 0;
        for (i = 0; i < s.size(); ++i)    //leet2code3
                  if (isdigit(s[i])) len *= s[i] - '0'; //len = 1 2 3 4 8 9 10 11 12 36 编码
                  else len += 1;
4.for (i = s.size() - 1; i >= 0; --i) //leet2code3 k=10 // k  = 10 10 10 0 //len = 36 12 11 10 9 8 4 3 2 1 0 解码                                                               
            k %= len;                       
            if (k == 0 && isalpha(s[i])) return string(1, s[i]);//string(size_t n, char c);
            if (isdigit(s[i])) len /= s[i] - '0';
            else len -= 1;
5.return "";
Code

作者：StellarVibes
链接：https://leetcode.cn/problems/decoded-string-at-index/solutions/3822613/880-suo-yin-chu-de-jie-ma-zi-fu-chuan-by-ejih/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string decodeAtIndex(string s, int k) {
        // 阶段 1：计算总长度
        // 从左到右遍历字符串  s ，根据字符类型更新解码后的字符串总长度  len ：
        // 如果是数字  d ，则  len *= d （表示当前字符串重复  d  次）。
        // 如果是字母，则  len += 1 。
        // 阶段 2：反向定位第  k  个字符
        // 从右向左遍历字符串  s ，逐步缩小  len  并调整  k ：
        // k %= len ：将  k  映射到当前周期内的等效位置。
        // 如果  k == 0  且当前字符是字母，说明这个字母就是第  k  个字符，直接返回。
        // 如果是数字，则  len /= d ，回退到重复前的长度。
        // 如果是字母，则  len -= 1 。
        unsigned long long len = 0;
        int i = 0;
        for (i = 0; i < s.size(); ++i)    //leet2code3
        {                                 //len = 1 2 3 4 8 9 10 11 12 36 编码
            if (isdigit(s[i])) 
                len *= s[i] - '0';
            else 
                len += 1;
        }
        for (i = s.size() - 1; i >= 0; --i) //leet2code3 k=10
        {                                   // k  = 10 10 10 0                                     
            k %= len;                       //len = 36 12 11 10 9 8 4 3 2 1 0 解码
            if (k == 0 && isalpha(s[i])) 
                return string(1, s[i]);//string(size_t n, char c);
            if (isdigit(s[i])) 
                len /= s[i] - '0';
            else 
                len -= 1;
        }
        return "";
    }
};