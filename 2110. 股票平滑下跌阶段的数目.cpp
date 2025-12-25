// 思路
// 1.long long res = 0; int n = prices.size(), curr = 1; // 当前连续平滑下降段的长度
// 2.if (n == 0) return 0;
// 3.for (int i = 1; i < n; ++i) 
//         if (prices[i-1] - prices[i] == 1)  curr++;
//         else  res += (long long)curr * (curr + 1) / 2; curr = 1;
// 4.res += (long long)curr * (curr + 1) / 2; // 处理最后一段连续的平滑下降段
// 5.return res;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/number-of-smooth-descent-periods-of-a-stock/solutions/3857348/2110-gu-piao-ping-hua-xia-die-jie-duan-d-3s46/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long res = 0; int n = prices.size(), curr = 1;// 当前连续平滑下降段的长度
        if (n == 0) return 0;
        for (int i = 1; i < n; ++i) 
        {
            if (prices[i-1] - prices[i] == 1) 
            {
                curr++;
            } 
            else 
            {
                res += (long long)curr * (curr + 1) / 2;
                curr = 1;
            }
        }
        
        res += (long long)curr * (curr + 1) / 2;// 处理最后一段连续的平滑下降段
        return res;
    }
};