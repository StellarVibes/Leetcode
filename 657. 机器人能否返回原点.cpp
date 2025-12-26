// 1.int x = 0,y = 0;
// 2.for(auto&e:moves)
// 3.switch(e)
// 4.case 'L':y--;break; // L（左）
// 5.case 'R':y++;break; // R（右）
// 6.case 'U':x--;break; // U（上）
// 7.case 'D':x++;break; // D（下）
// 8.return x==0&&y==0; //判断是否在 (0, 0) 处结束
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/robot-return-to-origin/solutions/3852294/657-ji-qi-ren-neng-fou-fan-hui-yuan-dian-efcu/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0,y = 0;
        for(auto&e:moves)
        {
            switch(e)
            {
                case 'L':y--;break; // L（左）
                case 'R':y++;break; // R（右）
                case 'U':x--;break; // U（上）
                case 'D':x++;break; // D（下）
            }
        }
        return x==0&&y==0; //判断是否在 (0, 0) 处结束
    }
};