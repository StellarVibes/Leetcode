// 思路
// 1.int ones = 0,sum =0,ret=0;
// 2.for(int i = 0;i<s.size();i++) if(s[i]=='1') ones++; //计算1的个数
// 3.for(int i = 0;i<s.size()-1;i++) //两个区间至少都有一个值
//             if(s[i]=='0') sum++; //计算左侧'0'的个数 else ones--; //计算右侧'1'的个数
//             if(ret<ones+sum) ret=ones+sum; //保存最大值
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-score-after-splitting-a-string/solutions/3826797/1422-fen-ge-zi-fu-chuan-de-zui-da-de-fen-mqg0/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maxScore(string s) {
        int ones = 0,sum =0,ret=0;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='1') ones++;//计算1的个数
        }
        for(int i = 0;i<s.size()-1;i++)//两个区间至少都有一个值
        {
            if(s[i]=='0'){
                sum++;//计算左侧'0'的个数
            }
            else{
                ones--;//计算右侧'1'的个数
            }
            if(ret<ones+sum) ret=ones+sum;//保存最大值
        }
        return ret;
    }
};