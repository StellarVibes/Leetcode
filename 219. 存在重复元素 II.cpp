// 思路
// 1.for(int i = 0;i<nums.size()-1;i++)
// 2.for(int j = i+1;j<nums.size()&&j<=i+k;j++) // abs(i - j) <= k
//     if(nums[i]==nums[j]) return true; 
// 3.return false;

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/contains-duplicate-ii/solutions/3893325/219-cun-zai-zhong-fu-yuan-su-ii-by-stell-iqv7/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0;i<nums.size()-1;i++)
        {
            for(int j = i+1;j<nums.size()&&j<=i+k;j++) // abs(i - j) <= k
            {
                if(nums[i]==nums[j]) return true; 
            }
        }
        return false;
    }
};