// 思路
// 1.unordered_map<int,int> mp;//.second计数
// 2.for(auto&e:nums) mp[e]++; if(mp[e]==2) return true;
// 3.return false;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/contains-duplicate/solutions/3819799/217-cun-zai-zhong-fu-yuan-su-by-stellarv-5rij/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;//.second计数
        for(auto&e:nums)
        {
            mp[e]++;
            if(mp[e]==2) return true;
        } 
        return false;
    }
};