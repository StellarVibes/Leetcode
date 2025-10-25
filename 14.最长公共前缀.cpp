// 思路
// 1.for(int i = 0;i<strs[0].size();i++)//以第一个str为例
// 2.int arr[26]={0};//记录arr[strs[j][i]-'a']
// 3.for(int j = 0;j<strs.size();j++)//列遍历
// 4.if(i<strs[j].size()) //防止越界 arr[strs[j][i]-'a']++;  else break; //为空 不满足条
// 5.if(arr[strs[0][i]-'a']!=strs.size()) break;//公共条件不满足
// 6.ret+=strs[0][i];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/longest-common-prefix/solutions/3815492/14zui-chang-gong-gong-qian-zhui-by-stell-viml/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        for(int i = 0;i<strs[0].size();i++)//以第一个str为例
        {
            int arr[26]={0};//记录arr[strs[j][i]-'a']
            for(int j = 0;j<strs.size();j++)//列遍历
            {
                if(i<strs[j].size())//防止越界
                    arr[strs[j][i]-'a']++;
                else break;//为空 不满足条件
            }
            if(arr[strs[0][i]-'a']!=strs.size()) break;//公共条件不满足
            ret+=strs[0][i];
        }
        return ret;
    }
};