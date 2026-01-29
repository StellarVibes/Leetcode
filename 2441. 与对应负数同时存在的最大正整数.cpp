// 思路
// 1.vector<int> neg; // 负数  unordered_set<int> pos; // 正数  int ret = -1;
// 2.for(auto&e:nums) if(e>0) pos.insert(e); else neg.push_back(e);
// 3.sort(neg.begin(),neg.end(),greater<int>()); // 逆序
// 4.for(auto&e:neg) if(pos.count(abs(e))) ret= max(ret,abs(e)); // 最小负数的绝对值
// 5.return ret;

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/largest-positive-integer-that-exists-with-its-negative/solutions/3891851/2441-yu-dui-ying-fu-shu-tong-shi-cun-zai-dod2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> neg; // 负数
        unordered_set<int> pos; // 正数
        int ret = -1;
        for(auto&e:nums)
        {
            if(e>0) pos.insert(e);
            else neg.push_back(e);
        }
        sort(neg.begin(),neg.end(),greater<int>()); // 逆序
        for(auto&e:neg)
        {
            if(pos.count(abs(e))) ret= max(ret,abs(e)); // 最小负数的绝对值
        }
        return ret;
    }
};