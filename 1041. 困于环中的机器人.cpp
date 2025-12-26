// 思路
// 1.int x[4]={0,1,0,-1};// ⬆️ ➡️ ⬇️ ⬅️ 
//     int y[4]={1,0,-1,0};//  0     1    2      3 
// 2.int i = 0,j = 0,direction = 0;
// 3.for(auto&e:instructions)
// 4. switch(e)
//            case 'G':i+=x[direction];j+=y[direction];break;
//            case 'L':direction=(direction+3)%4;break;
//            case 'R':direction=(direction+1)%4;break;
// 5.return (i==0&&j==0)||direction!=0;
// //执行一轮指令回到原点」或「执行一轮后方向不是初始北方(多轮后会回到原点) 如果方向还是北 即不可能回头
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/robot-bounded-in-circle/solutions/3853393/1041-kun-yu-huan-zhong-de-ji-qi-ren-by-s-pqqk/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x[4]={0,1,0,-1};// ⬆️ ➡️ ⬇️ ⬅️ 
        int y[4]={1,0,-1,0};//  0  1   2  3 
        int i = 0,j = 0,direction = 0;
        for(auto&e:instructions)
        {
            switch(e)
            {
                case 'G':i+=x[direction];j+=y[direction];break;
                case 'L':direction=(direction+3)%4;break;
                case 'R':direction=(direction+1)%4;break;
            }
        }
        return (i==0&&j==0)||direction!=0;//执行一轮指令回到原点」或「执行一轮后方向不是初始北方(多轮后会回到原点) 如果方向还是北 即不可能回头
};