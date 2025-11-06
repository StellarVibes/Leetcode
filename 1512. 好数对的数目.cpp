// 思路
// 1.int ret = 0;
// 2.for(int i = 0;i<nums.size()-1;i++)
// 3.for(int j = i+1;j<nums.size();j++) //i < j
//              if(nums[i]==nums[j]) ret++; //nums[i] == nums[j]
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/number-of-good-pairs/solutions/3825418/1512-hao-shu-dui-de-shu-mu-by-stellarvib-i914/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ret = 0;
        for(int i = 0;i<nums.size()-1;i++)
        {
            for(int j = i+1;j<nums.size();j++)//i < j
            {
                if(nums[i]==nums[j]) ret++;//nums[i] == nums[j]
            }
        }
        return ret;
    }
};