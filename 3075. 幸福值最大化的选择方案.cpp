// 思路
// 1.long long count = 0,sum = 0;
// 2.sort(happiness.begin(),happiness.end(),greater<int>()); // 排序
// 3.for(long long i = 0;i<k;i++)
// 4.long long num = happiness[i]-count;
// 5.if(num<=0) break;
// 6.sum+=num; count++; // 幸福值减少 1
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximize-happiness-of-selected-children/solutions/3865584/3075-xing-fu-zhi-zui-da-hua-de-xuan-ze-f-rboq/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long count = 0,sum = 0;
        sort(happiness.begin(),happiness.end(),greater<int>()); // 排序
        for(long long i = 0;i<k;i++)
        {
            long long num = happiness[i]-count;
            if(num<=0) break;
            sum+=num;
            count++; // 幸福值减少 1
        }
        return sum;
    }
};