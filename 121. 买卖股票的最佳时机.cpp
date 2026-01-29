// 思路
// 1.vector<int> min_arr; int min_num = prices[0],ret = 0;
// 2.for(auto&e:prices)
// 3.if(e<min_num) min_num = e;
// 4.min_arr.push_back(min_num); // 保存前i个的最小值
// 5.for(int i = 1;i<prices.size();i++)
// 6.ret = max(ret,prices[i]-min_arr[i-1]); // 计算最大利润 current_val - min[i-1]

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/solutions/3891873/121-mai-mai-gu-piao-de-zui-jia-shi-ji-by-6laf/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> min_arr;
        int min_num = prices[0],ret = 0;
        for(auto&e:prices)
        {
            if(e<min_num) min_num = e;
            min_arr.push_back(min_num); // 保存前i个的最小值
        }
        for(int i = 1;i<prices.size();i++)
        {
            ret = max(ret,prices[i]-min_arr[i-1]); // 计算最大利润 current_val - min[i-1]
        }
        return ret;
    }
};