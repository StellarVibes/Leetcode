// 思路
// 1.sort(nums.begin(),nums.end());//排序 单调 双指针 区间
// 2.for(int i = nums.size()-1;i>1;i--)//从右往左
// 3.while(left<right)
//                if(nums[left]+nums[right]+nums[i]>0) right--; //大于移动right来减小
//                else if(nums[left]+nums[right]+nums[i]<0) left++; //小于移动left来增大
//                else vv.push_back({nums[left],nums[right],nums[i]}); left++; right--;
//                          while(right&&nums[right]==nums[right+1]) right--;//去重
//                          while(left<i-1&&nums[left]==nums[left-1]) left++;//去重
// 4.while(i>1&&nums[i]==nums[i-1]) i--;//去重
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/3sum/solutions/3816000/15san-shu-zhi-he-by-stellarvibes-lhkg/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vv;
        sort(nums.begin(),nums.end());//排序 单调 双指针 区间
        for(int i = nums.size()-1;i>1;i--)//从右往左
        {
            int left = 0,right = i-1;
            while(left<right)
            {
                if(nums[left]+nums[right]+nums[i]>0)//大于移动right来减小
                    right--;
                else if(nums[left]+nums[right]+nums[i]<0)//小于移动left来增大
                    left++;
                else 
                {
                    vv.push_back({nums[left],nums[right],nums[i]});
                    left++;
                    right--;
                    while(right&&nums[right]==nums[right+1]) right--;//去重
                    while(left<i-1&&nums[left]==nums[left-1]) left++;//去重
                }
            }
            while(i>1&&nums[i]==nums[i-1]) i--;//去重
        }
        return vv;
    }
};