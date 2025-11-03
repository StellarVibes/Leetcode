// 思路
// 1.int dx[4]={0,0,-1,1}; int dy[4]={-1,1,0,0};
// 2.void dfs(vector<vector<int>>& img, int x, int y, int oldColor, int newColor) 
// 3.if (x < 0 || x >= img.size() || y < 0 || y >= img[0].size()) return;//越界
// 4.if (img[x][y] != oldColor) return;//当没有其它原始颜色的相邻像素时停止操作
// 5.img[x][y] = newColor;
// 6.for(int i = 0;i<4;i++) dfs(img, x+dx[i], y+dy[i], oldColor, newColor);//扩散
// 7.int old_color = image[sr][sc];//保存需要改变的值
// 8.if(old_color == color) return image;
// 9.dfs(image, sr, sc, old_color, color);//递归扩散
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/flood-fill/solutions/3822141/733-tu-xiang-xuan-ran-by-stellarvibes-c240/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    void dfs(vector<vector<int>>& img, int x, int y, int oldColor, int newColor) 
    {
        if (x < 0 || x >= img.size() || y < 0 || y >= img[0].size()) return;//越界
        if (img[x][y] != oldColor) return;//当没有其它原始颜色的相邻像素时停止操作
        img[x][y] = newColor;
        for(int i = 0;i<4;i++)
        {
            dfs(img, x+dx[i], y+dy[i], oldColor, newColor);//扩散
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old_color = image[sr][sc];//保存需要改变的值
        if(old_color == color) return image;
        dfs(image, sr, sc, old_color, color);//递归扩散
        return image;
    }
};