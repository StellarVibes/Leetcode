// 思路
// 1.vector<int> ret; unordered_set<int> set;
// 2.for(auto&e:nums) set.insert(e);//去重
// 3.for(int i = 1;i<=nums.size();i++) if(!set.count(i)) ret.push_back(i); //不存在则说明没有
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-all-numbers-disappeared-in-an-array/solutions/3825140/448-zhao-dao-suo-you-shu-zu-zhong-xiao-s-zroh/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ret;
        unordered_set<int> set;
        for(auto&e:nums) set.insert(e);//去重
        for(int i = 1;i<=nums.size();i++)
        {
            if(!set.count(i))//不存在则说明没有
            {
                ret.push_back(i);
            }
        }
        return ret;
    }
};