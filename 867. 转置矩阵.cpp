// 思路
// 1.vector<vector<int>> ret;
// 2.for(int y = 0;y<matrix[0].size();y++)
// 3.vector<int> tmp;
// 4.for(int x = 0;x<matrix.size();x++) tmp.push_back(matrix[x][y]); //y不变 x加加

// 5.ret.push_back(tmp);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/transpose-matrix/solutions/3826768/867-zhuan-zhi-ju-zhen-by-stellarvibes-rfgq/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ret;
        for(int y = 0;y<matrix[0].size();y++)
        {
            vector<int> tmp;
            for(int x = 0;x<matrix.size();x++)//y不变 x加加
            {
                tmp.push_back(matrix[x][y]);
            }
            ret.push_back(tmp);
        }
        return ret;
    }
};