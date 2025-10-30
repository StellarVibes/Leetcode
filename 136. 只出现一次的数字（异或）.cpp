// 思路
// 1.for(auto &e:nums) a^=e;// 相同的数异或后为0 任何数异或0为本身
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/single-number/solutions/3819484/136-zhi-chu-xian-yi-ci-de-shu-zi-yi-huo-p3ehm/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int> mp;//.second 记录次数
        // for(auto &e:nums)
        // {
        //     mp[e]++;
        // }
        // for(auto &e:mp)
        // {
        //     if(e.second==1) return e.first;
        // }
        // return 0;
        int a = 0;
        for(auto &e:nums) a^=e;// 相同的数异或后为0 任何数异或0为本身
        return a;
    }
};