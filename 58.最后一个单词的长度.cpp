// 思路
// 1.for(int i = s.size()-1;i>=0;i--) //去掉尾部'  '
//             if(s[i]==' ') s.pop_back();
//             else break;
// 2.int index = s.rfind(' '); //找到第一个' '
// 3.if(index!=std::string::npos)
//             return s.size()-index-1;
//     else return s.size();
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/length-of-last-word/solutions/3817333/58zui-hou-yi-ge-dan-ci-de-chang-du-by-st-4r40/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int lengthOfLastWord(string s) {
        for(int i = s.size()-1;i>=0;i--)//去掉尾部' '
        {
            if(s[i]==' ') s.pop_back();
            else break;
        }
        int index = s.rfind(' ');//找到第一个' '
        if(index!=std::string::npos)
            return s.size()-index-1;
        else return s.size();
    }
};