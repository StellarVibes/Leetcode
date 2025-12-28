// 思路
// 1.int ret = 0;
// 2.for(int i = 0;i<grid.size();i++)
// 3.for(int j = 0;j<grid[0].size();j++)
// 4.if(grid[i][j]<0) {ret+=grid[0].size()-j;break;} // grid[i][>=j]<0 
// 5.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-negative-numbers-in-a-sorted-matrix/solutions/3867813/1351-tong-ji-you-xu-ju-zhen-zhong-de-fu-k0yaj/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ret = 0;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                if(grid[i][j]<0) {ret+=grid[0].size()-j;break;}// grid[i][>=j]<0
            }
        }
        return ret;
    }
};