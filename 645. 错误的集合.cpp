// 思路
// 1.sort(nums.begin(),nums.end());
// 2.int ret = 0,tmp = 0,n = nums.size(),sum = n*(1+n)/2;
// 3.for(auto&e:nums)
//             if(ret!=e) ret = e; //保存上一个值
//             else tmp = ret; //记录重复值
//             sum-=e; //计算差值
// 4.return {tmp,tmp+sum};
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/set-mismatch/solutions/3837463/645-cuo-wu-de-ji-he-by-stellarvibes-56o9/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ret = 0,tmp = 0,n = nums.size(),sum = n*(1+n)/2;
        for(auto&e:nums)
        {
            if(ret!=e) ret = e;//保存上一个值
            else tmp = ret;//记录重复值
            sum-=e;//计算差值
        }
        return {tmp,tmp+sum};
    }
};