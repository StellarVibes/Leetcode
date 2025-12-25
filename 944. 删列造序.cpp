// 思路
// 1.int count = 0;
// 2.for(int y = 0;y<strs[0].size();y++)
// 3.for(int x = 1;x<strs.size();x++)
// 4.if(strs[x-1][y]>strs[x][y]) {count++;break;}//计算不符合字典序的列
// 5.return count;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/delete-columns-to-make-sorted/solutions/3861303/944-shan-lie-zao-xu-by-stellarvibes-hheo/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int y = 0;y<strs[0].size();y++)
        {
            for(int x = 1;x<strs.size();x++)
            {
                if(strs[x-1][y]>strs[x][y]) {count++;break;}//计算不符合字典序的列
            }
        }
        return count;
    }
};