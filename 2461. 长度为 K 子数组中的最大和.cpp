// 思路
// 1.long long sum = 0,ret =0,flag = 0,len = k; int arr[100001]={0};//1 <= nums[i] <= 10^5
// 2.for(int left = 0,right = 0;left<=nums.size()-k&&right<nums.size();)//[left,right]
// 3.if(len) len--; arr[nums[right]]++; sum+=nums[right];//计算k个数的和
//                 if(arr[nums[right]]>=2) flag++;//记录重复数字个数
//                 if(len==0&&!flag&&ret<sum) ret =sum;//长度满足且
//                 right++;
// 4.else len++; sum-=nums[left];
//                 if(arr[nums[left]]>=2) flag--;
//                 arr[nums[left]]--;
//                 left++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-sum-of-distinct-subarrays-with-length-k/solutions/3828745/2461-chang-du-wei-k-zi-shu-zu-zhong-de-z-putd/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0,ret =0,flag = 0,len = k;
        int arr[100001]={0};//1 <= nums[i] <= 10^5
        for(int left = 0,right = 0;left<=nums.size()-k&&right<nums.size();)//[left,right]
        {
            if(len)
            {
                len--;
                arr[nums[right]]++;
                sum+=nums[right];//计算k个数的和
                if(arr[nums[right]]>=2) flag++;//记录重复数字个数
                if(len==0&&!flag&&ret<sum) ret =sum;//长度满足且
                right++;
            }
            else
            {
                len++;
                sum-=nums[left];
                if(arr[nums[left]]>=2) flag--;
                arr[nums[left]]--;
                left++;
            }
        }
        return ret;
    }
};