// 思路
// 1.int arr[3][3]={0}; int num = 1;
// 2.for(auto&e:moves) arr[e[0]][e[1]]=num; num*=-1; // A -> 1  B -> -1
// 3.for(int i = 0;i<3;i++) int x_sum = 0; // 横向
//             for(int j = 0;j<3;j++) x_sum+=arr[i][j];
//             if(x_sum==3) return "A";
//             else if(x_sum==-3) return "B";
// 4. for(int j = 0;j<3;j++) int y_sum = 0; //纵向
//             for(int i = 0;i<3;i++) y_sum+=arr[i][j];
//             if(y_sum==3) return "A";
//             else if(y_sum==-3) return "B";
// 5.for(int x = 0;x<3;x++) sum+=arr[x][x]; //斜对角线
//              if(sum==3) return "A";
//              else if(sum==-3) return "B";
// 6.for(int x = 2,y = 0;x>=0;x--) sum+=arr[x][y++]; //斜对角线
//              if(sum==3) return "A";
//              else if(sum==-3) return "B";
// 7.if(moves.size()!=9) return "Pending";
// 8.return "Draw";
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-winner-on-a-tic-tac-toe-game/solutions/3852307/1275-zhao-chu-jing-zi-qi-de-huo-sheng-zh-81k4/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int arr[3][3]={0};
        int num = 1;
        for(auto&e:moves)// A -> 1  B -> -1
        {
            arr[e[0]][e[1]]=num;
            num*=-1;
        }
        for(int i = 0;i<3;i++) // 横向
        {
            int x_sum = 0;
            for(int j = 0;j<3;j++)
            {
                x_sum+=arr[i][j];
            }
            if(x_sum==3) return "A";
            else if(x_sum==-3) return "B";
        }
        for(int j = 0;j<3;j++) //纵向
        {
            int y_sum = 0;
            for(int i = 0;i<3;i++)
            {
                y_sum+=arr[i][j];
            }
            if(y_sum==3) return "A";
            else if(y_sum==-3) return "B";
        }
        int sum = 0;
        for(int x = 0;x<3;x++) //斜对角线
        {
            sum+=arr[x][x];
        }
        if(sum==3) return "A";
        else if(sum==-3) return "B";
        sum = 0;
        for(int x = 2,y = 0;x>=0;x--) //斜对角线
        {
            sum+=arr[x][y++];
        }
        if(sum==3) return "A";
        else if(sum==-3) return "B";
        if(moves.size()!=9) return "Pending";
        return "Draw";
    }
};