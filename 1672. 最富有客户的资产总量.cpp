// 思路
// 1.int ret = 0;
// 2.for(int i = 0;i<accounts.size();i++)
// 3.int sum = 0;
// 4.for(int j = 0;j<accounts[i].size();j++) sum+=accounts[i][j];
// 5.ret = max(ret,sum);// 得到行最大和
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/richest-customer-wealth/solutions/3873671/1672-zui-fu-you-ke-hu-de-zi-chan-zong-li-pg8f/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ret = 0;
        for(int i = 0;i<accounts.size();i++)
        {
            int sum = 0;
            for(int j = 0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
            ret = max(ret,sum);// 得到行最大和
        }
        return ret;
    }
};