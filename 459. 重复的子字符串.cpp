// 思路
// 1.int size = s.size();
// 2.if(size==1) return false;
// 3.string tmp = s; tmp+=tmp; //方便构造
// 4.for(int i = 1;i<size;i++)
//             string ret= tmp.substr(i,size);
//             if(tmp.compare(ret)&&!s.compare(ret)) return true; //移动一个重复字符串后如果相等且不是和s相同
// 5.return false;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/repeated-substring-pattern/solutions/3825164/459-zhong-fu-de-zi-zi-fu-chuan-by-stella-qji5/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = s.size();
        if(size==1) return false;
        string tmp = s;
        tmp+=tmp;//方便构造
        for(int i = 1;i<size;i++)
        {
            string ret= tmp.substr(i,size);
            if(tmp.compare(ret)&&!s.compare(ret)) return true;//移动一个重复字符串后如果相等且不是和s相同
        }
        return false;
    }
};