// 思路
// 1.vector<int> ret; int x = 0,y = -1,m = matrix.size(),n = matrix[0].size(); 
// 2. while(!(ret.size()==m *n)) // -100 <= matrix[i][j] <= 100  matrix[x][y+1]>=-100 -> 未访问
// 3.while(y+1<n && matrix[x][y+1]>=-100) {ret.push_back(matrix[x][++y]);matrix[x][y]=-200;} 
// 4.while(x+1<m && matrix[x+1][y]>=-100) {ret.push_back(matrix[++x][y]);matrix[x][y]=-200;}
// 5.while(y>0 && matrix[x][y-1]>=-100) {ret.push_back(matrix[x][--y]);matrix[x][y]=-200;}
// 6.while(x>0 && matrix[x-1][y]>=-100) {ret.push_back(matrix[--x][y]);matrix[x][y]=-200;}
// // y+1<n x+1<m y>0 x>0 方便继续遍历
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/spiral-matrix/solutions/3875183/54-luo-xuan-ju-zhen-by-stellarvibes-jumx/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        int x = 0,y = -1,m = matrix.size(),n = matrix[0].size(); 
        while(!(ret.size()==m *n)) // -100 <= matrix[i][j] <= 100  matrix[x][y+1]>=-100 -> 未访问
        {
            // y+1<n x+1<m y>0 x>0 方便继续遍历
            while(y+1<n && matrix[x][y+1]>=-100) {ret.push_back(matrix[x][++y]);matrix[x][y]=-200;}
            while(x+1<m && matrix[x+1][y]>=-100) {ret.push_back(matrix[++x][y]);matrix[x][y]=-200;}
            while(y>0 && matrix[x][y-1]>=-100) {ret.push_back(matrix[x][--y]);matrix[x][y]=-200;}
            while(x>0 && matrix[x-1][y]>=-100) {ret.push_back(matrix[--x][y]);matrix[x][y]=-200;}
        }
        return ret;
    }
};