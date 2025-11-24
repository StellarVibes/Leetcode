// 思路
// 1.vector<bool> ret; int current = 0; // 仅维护模5的结果，避免溢出
// 2.for (int n : nums) 
//             current = (current * 2 + n) % 5; // 核心：递推计算当前前缀的模5值
//             ret.push_back(current == 0);    // 模5为0则能被整除
// 3.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/binary-prefix-divisible-by-5/solutions/3840521/1018-ke-bei-5-zheng-chu-de-er-jin-zhi-qi-2pg6/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ret;
        int current = 0; // 仅维护模5的结果，避免溢出
        for (int n : nums) 
        {
            current = (current * 2 + n) % 5; // 核心：递推计算当前前缀的模5值
            ret.push_back(current == 0);    // 模5为0则能被整除
        }
        return ret;
    }
};