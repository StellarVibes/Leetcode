// 思路
// 1.bool is_legal(const string& str) 
// 2.if (str.empty()) return false;
// 3.for (const char& e : str) 
//             bool isAlpha = (e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z');
//             bool isDigit = (e >= '0' && e <= '9'); bool isUnderline = (e == '_');
//             if (!(isAlpha || isDigit || isUnderline)) return false;
// 4.return true;
// 5.vector<string> ret; vector<vector<string>> vvs(4);
// 6.unordered_map<string, int> mp{
//             {"electronics", 0},
//             {"grocery", 1},
//             {"pharmacy", 2},
//             {"restaurant", 3}
//         };
// 7.for (int i = 0; i < code.size(); ++i) 
//             if (!isActive[i]) continue; // 条件1：优惠券激活
//             if (mp.find(businessLine[i]) == mp.end()) continue; // 条件2：业务类别合法（必须是指定4类之一）
//             if (!is_legal(code[i])) continue; // 条件3：code合法
//             int idx = mp[businessLine[i]]; // 所有条件满足，加入对应分组
//             vvs[idx].push_back(code[i]);
// 8. for (auto& group : vvs) sort(group.begin(), group.end()); // 每个类别内按字典序升序排序
// 9. for (const auto& group : vvs) // 按业务类别顺序合并结果
//              for (const auto& str : group)  ret.push_back(str);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/coupon-code-validator/solutions/3855877/3606-you-hui-quan-xiao-yan-qi-by-stellar-64b3/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool is_legal(const string& str) 
    {
        if (str.empty()) return false;
        for (const char& e : str) 
        {
            bool isAlpha = (e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z');
            bool isDigit = (e >= '0' && e <= '9');
            bool isUnderline = (e == '_');
            if (!(isAlpha || isDigit || isUnderline)) 
            {
                return false;
            }
        }
        return true;
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> ret;
        vector<vector<string>> vvs(4);
        unordered_map<string, int> mp{
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        };

        for (int i = 0; i < code.size(); ++i) 
        {
            if (!isActive[i]) continue;// 条件1：优惠券激活
            if (mp.find(businessLine[i]) == mp.end()) continue;// 条件2：业务类别合法（必须是指定4类之一）
            if (!is_legal(code[i])) continue;// 条件3：code合法
            int idx = mp[businessLine[i]];// 所有条件满足，加入对应分组
            vvs[idx].push_back(code[i]);
        }

        for (auto& group : vvs) // 每个类别内按字典序升序排序
        {
            sort(group.begin(), group.end());
        }

        for (const auto& group : vvs) // 按业务类别顺序合并结果
        {
            for (const auto& str : group) 
            {
                ret.push_back(str);
            }
        }

        return ret;
    }
};