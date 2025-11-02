// 思路
// 1.vector<vector<char>> g(m, vector<char>(n, 0));// 建图并填墙和守卫
// 2.for (auto &w : walls)  g[w[0]][w[1]] = -1; for (auto &ga : guards) g[ga[0]][ga[1]] = 1;
// 3.const int dx[4] = {-1, 1, 0, 0}; const int dy[4] = {0, 0, -1, 1};
// 4.for (auto &ga : guards)  //从每个守卫出发标记被守卫的格子
//             for (int d = 0; d < 4; ++d) 
//                 int x = ga[0], y = ga[1];
//                 while (true) x += dx[d]; y += dy[d];
//                     if (x < 0 || x >= m || y < 0 || y >= n) break;      // 出界
//                     if (g[x][y] == -1 || g[x][y] == 1) break;           // 墙或守卫
//                     if (g[x][y] == 0) g[x][y] = 2;                      // 标记为被守卫
// 5.int ans = 0; // 3. 统计未被守卫的格子
// 6.for (int i = 0; i < m; ++i)
//            for (int j = 0; j < n; ++j)
//                 if (g[i][j] == 0) ++ans;
// 7. return ans;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-unguarded-cells-in-the-grid/solutions/3821459/2257-tong-ji-wang-ge-tu-zhong-mei-you-be-2fs6/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countUnguarded(int m, int n,vector<vector<int>>& guards,vector<vector<int>>& walls) {
        // 1. 建图并填墙和守卫
        vector<vector<char>> g(m, vector<char>(n, 0));
        for (auto &w : walls)  g[w[0]][w[1]] = -1;
        for (auto &ga : guards) g[ga[0]][ga[1]] = 1;

        // 四个方向
        const int dx[4] = {-1, 1, 0, 0};
        const int dy[4] = {0, 0, -1, 1};

        // 2. 从每个守卫出发标记被守卫的格子
        for (auto &ga : guards) {
            for (int d = 0; d < 4; ++d) {
                int x = ga[0], y = ga[1];
                while (true) {
                    x += dx[d];
                    y += dy[d];
                    if (x < 0 || x >= m || y < 0 || y >= n) break;      // 出界
                    if (g[x][y] == -1 || g[x][y] == 1) break;           // 墙或守卫
                    if (g[x][y] == 0) g[x][y] = 2;                      // 标记为被守卫
                }
            }
        }

        // 3. 统计未被守卫的格子
        int ans = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (g[i][j] == 0) ++ans;

        return ans;
    }
};