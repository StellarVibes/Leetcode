// 思路
// 1.for(int i = 0;i<colors.size()-1;i++)
// 2.if(i+1<colors.size()&&colors[i]==colors[i+1]) //找相同颜色
// 3.int sum = 0;  int max_num = 0; //计算续的气球颜色的时间
// 4.while(i+1<colors.size()&&colors[i]==colors[i+1])
//                sum+=neededTime[i];
//                if(max_num<neededTime[i]) max_num = neededTime[i];
//                 i++;
// 5.sum+=neededTime[i];//再加上最后一个相同颜色
// 6.if(max_num<neededTime[i]) max_num = neededTime[i]; sum-=max_num; //减去单个最大时间
// 7.ret+=sum;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-time-to-make-rope-colorful/solutions/3821884/1578-shi-sheng-zi-bian-cheng-cai-se-de-z-nh22/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ret = 0;
        for(int i = 0;i<colors.size()-1;i++)
        {
            if(i+1<colors.size()&&colors[i]==colors[i+1])//找相同颜色
            {
                int sum = 0;//计算续的气球颜色的时间
                int max_num = 0;
                while(i+1<colors.size()&&colors[i]==colors[i+1])
                {
                    sum+=neededTime[i];
                    if(max_num<neededTime[i]) max_num = neededTime[i];
                    i++;
                }
                sum+=neededTime[i];//再加上最后一个相同颜色
                if(max_num<neededTime[i]) max_num = neededTime[i];
                sum-=max_num;//减去单个最大时间
                ret+=sum;
            }
        }
        return ret;
    }
};