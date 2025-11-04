思路
1.if(s.size()==0) return t[0];
2.int ret = 0;//通过异或找到没有重复出现的字符
3.for(auto&e:s) ret^=e;
4.for(auto&e:t) ret^=e;
Code

作者：StellarVibes
链接：https://leetcode.cn/problems/find-the-difference/solutions/3822931/389-zhao-bu-tong-by-stellarvibes-12kn/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size()==0) return t[0];
        int ret = 0;//通过异或找到没有重复出现的字符
        for(auto&e:s) ret^=e;
        for(auto&e:t) ret^=e;
        return ret;
    }
};