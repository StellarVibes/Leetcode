// 思路
// 1.int n = nums.size(); vector<int> ret(n,0); unordered_map<int,int> mp;
// 2.for(int i = 0;i<1000;i++) // 2 <= nums[i] <= 1000
// 3.if(!mp.count(i|(i+1))) mp[i|(i+1)]=i; // ans[i] OR (ans[i] + 1) == nums[i]
// cout<<(i|(i+1))<<" "<<mp[i|(i+1)]<<endl;
// 4.for(int i = 0;i<n;i++)
// 5.if(mp.count(nums[i])) ret[i]=mp[nums[i]]; else ret[i]=-1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/construct-the-minimum-bitwise-array-i/solutions/3884641/3314-gou-zao-zui-xiao-wei-yun-suan-shu-z-otk5/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ret(n,0);
        unordered_map<int,int> mp;
        for(int i = 0;i<1000;i++) // 2 <= nums[i] <= 1000
        {
            if(!mp.count(i|(i+1))) 
            {
                mp[i|(i+1)]=i; // ans[i] OR (ans[i] + 1) == nums[i]
                // cout<<(i|(i+1))<<" "<<mp[i|(i+1)]<<endl;
            }
        }
        for(int i = 0;i<n;i++)
        {
            if(mp.count(nums[i])) ret[i]=mp[nums[i]];
            else ret[i]=-1;
        }
        return ret;
    }
};