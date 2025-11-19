// 思路
// 1.unordered_set<char> set;
// 2.string ret; int left = 0;
// 3.for(auto&e:s) set.insert(e);
// 4.for(auto&e:t) if(set.count(e)) ret.push_back(e);//去掉没有在s出现的元素
// 5.for(int i = 0;i<ret.size();i++)
//           if(ret[i]==s[left]) left++;//存在就向后移动
// 6.return left==s.size();//是否移动到末尾
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/is-subsequence/solutions/3836789/392-pan-duan-zi-xu-lie-by-stellarvibes-mw1r/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_set<char> set;
        string ret;
        int left = 0;
        for(auto&e:s) set.insert(e);
        for(auto&e:t)
            if(set.count(e)) ret.push_back(e);//去掉没有在s出现的元素
        for(int i = 0;i<ret.size();i++)
        {
            if(ret[i]==s[left])//存在就向后移动
            {
                left++;
            }
        }
        return left==s.size();//是否移动到末尾
    }
};