// 思路
// 1.sort(nums.begin(),nums.end());//排序 区间
// 2.for(int i = nums.size()-1;i>2;i--)//从右往左
//           for(int j = i-1;j>1;j--)//从右往左
//                  while(left<right)
//                              if(sum>target) right--; //大于target right--
//                               else if(sum<target) left++; //小于target left++
//                               else  vv.push_back({nums[left],nums[right],nums[j],nums[i]});
//                                         left++;
//                                         right--;
//                                         while(left<right&&nums[left]==nums[left-1]) left++;//去重
//                                         while(left<right&&nums[right]==nums[right+1]) right--;//去重
// 3.while(j-1>1&&nums[j]==nums[j-1]) j--;//去重
// 4.while(i-1>2&&nums[i]==nums[i-1]) i--;//去重
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/4sum/solutions/3816710/18si-shu-zhi-he-by-stellarvibes-m6l4/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> vv;
        sort(nums.begin(),nums.end());//排序 区间
        for(int i = nums.size()-1;i>2;i--)//从右往左
        {
            for(int j = i-1;j>1;j--)//从右往左
            {
                int left = 0,right = j-1;
                while(left<right)
                {
                    long long sum =(long long)nums[left]+nums[right]+nums[i]+nums[j];//数据溢出
                    if(sum>target)//大于target right--
                    {
                        right--;
                    }
                    else if(sum<target)//小于target left++
                    {
                        left++;
                    }
                    else{
                        vv.push_back({nums[left],nums[right],nums[j],nums[i]});
                        left++;
                        right--;
                        while(left<right&&nums[left]==nums[left-1]) left++;//去重
                        while(left<right&&nums[right]==nums[right+1]) right--;//去重
                    }
                }
                while(j-1>1&&nums[j]==nums[j-1]) j--;//去重
            }
            while(i-1>2&&nums[i]==nums[i-1]) i--;//去重
        }
        return vv;
    }
};