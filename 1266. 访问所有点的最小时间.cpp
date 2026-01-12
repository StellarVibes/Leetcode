// 思路
// 1.dx < dy： 沿对角线移动 dx 次，再竖直移动 dy - dx 次，总计 dx + (dy - dx) = dy 次
// 2.dx == dy：沿对角线移动 dx 次
// 3.dx > dy： 沿对角线移动 dy 次，再水平移动 dx - dy 次，总计 dy + (dx - dy) = dx 次
// 4.for(int i = 1;i<points.size();i++)
// 5.int x = abs(points[i][0]-points[i-1][0]);
// 6.int y = abs(points[i][1]-points[i-1][1]);
// 7.sum+=max(x,y); // 切比雪夫距离
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-time-visiting-all-points/solutions/3878529/1266-fang-wen-suo-you-dian-de-zui-xiao-s-3qnz/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        // dx < dy： 沿对角线移动 dx 次，再竖直移动 dy - dx 次，总计 dx + (dy - dx) = dy 次
        // dx == dy：沿对角线移动 dx 次
        // dx > dy： 沿对角线移动 dy 次，再水平移动 dx - dy 次，总计 dy + (dx - dy) = dx 次
        int sum = 0;
        for(int i = 1;i<points.size();i++)
        {
            int x = abs(points[i][0]-points[i-1][0]);
            int y = abs(points[i][1]-points[i-1][1]);
            sum+=max(x,y); // 切比雪夫距离
        }
        return sum;
    }
};