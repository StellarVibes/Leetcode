// 思路
// 1.for(auto&e:s) e =tolower(e);//转换小写字符
// 2.return s;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/to-lower-case/solutions/3820745/709-zhuan-huan-cheng-xiao-xie-zi-mu-by-s-suny/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string toLowerCase(string s) {
        for(auto&e:s) e =tolower(e);//转换小写字符
        return s;
    }
};