// 思路
// 1.long long sum = 0, ret = LLONG_MAX, tmp = 0, n = customers.size();
// 2.vector<long long> prefix(n + 1, 0), suffix(n + 1, 0);
// 3.for (long long i = n - 1; i >= 0;i--) // 计算后缀：从i开始到结尾的'Y'数量
//         sum += (customers[i] == 'Y');
//         suffix[i] = sum;
// 4.suffix[n] = 0; // 添加边界情况
// 5.sum = 0;
// 6.for (long long i = 0; i < n; i++) // 计算前缀：从开头到i-1的'N'数量
//         sum += (customers[i] == 'N');
//         prefix[i + 1] = sum; // prefix[i] 表示前i小时的'N'数量
// 7.for (long long i = 0; i <= n; i++) {
//             long long num = prefix[i] + suffix[i]; // 开门期间的不满意顾客('N') + 关门后到来的满意顾客('Y')
// 8.if (num < ret) ret = num; tmp = i;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-penalty-for-a-shop/solutions/3866012/2483-shang-dian-de-zui-shao-dai-jie-by-s-9akt/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int bestClosingTime(string customers) {
        long long sum = 0, ret = LLONG_MAX, tmp = 0, n = customers.size();
        vector<long long> prefix(n + 1, 0), suffix(n + 1, 0);

        for (long long i = n - 1; i >= 0;i--) // 计算后缀：从i开始到结尾的'Y'数量
        {
            sum += (customers[i] == 'Y');
            suffix[i] = sum;
        }
        suffix[n] = 0; // 添加边界情况

        sum = 0;
        for (long long i = 0; i < n; i++) // 计算前缀：从开头到i-1的'N'数量
        {
            sum += (customers[i] == 'N');
            prefix[i + 1] = sum; // prefix[i] 表示前i小时的'N'数量
        }

        for (long long i = 0; i <= n; i++) 
        {
            long long num = prefix[i] + suffix[i]; // 开门期间的不满意顾客('N') + 关门后到来的满意顾客('Y')
            if (num < ret) 
            {
                ret = num;
                tmp = i;
            }
        }

        return tmp;
    }
};