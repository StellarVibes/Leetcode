// 思路
// 1.int n = matrix.size();
// 2.for(int i = 1;i<n;i++) // 矩阵的元素按对角线翻转，再逐行逆序
// 3.for(int j = 0;j<i;j++) // [0,i-1]
// 4.swap(matrix[i][j],matrix[j][i]);
// 5.for(auto&e:matrix) reverse(e.begin(),e.end());
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/rotate-image/solutions/3875323/48-xuan-zhuan-tu-xiang-by-stellarvibes-jt2j/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 1;i<n;i++) // 矩阵的元素按对角线翻转，再逐行逆序
        {
            for(int j = 0;j<i;j++) // [0,i-1]
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(auto&e:matrix) reverse(e.begin(),e.end());
    }
};