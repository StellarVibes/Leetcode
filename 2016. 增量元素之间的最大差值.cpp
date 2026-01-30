// 思路
// 1.vector<int> min_arr; int min_num = nums[0],ret = -1;
// 2.for(auto&e:nums)
// 3.if(e<min_num) min_num = e;
// 4.min_arr.push_back(min_num); // 保存前i个的最小值
// 5.for(int i = 1;i<nums.size();i++)
// 6.int n = nums[i]-min_arr[i-1];
// 7.if(n>ret&&n!=0) // ums[i] < nums[j]
//       ret = nums[i]-min_arr[i-1]; // 计算最大利润 current_val - min[i-1]

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-difference-between-increasing-elements/solutions/3892285/2016-zeng-liang-yuan-su-zhi-jian-de-zui-61zkj/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int> min_arr;
        int min_num = nums[0],ret = -1;
        for(auto&e:nums)
        {
            if(e<min_num) min_num = e;
            min_arr.push_back(min_num); // 保存前i个的最小值
        }
        for(int i = 1;i<nums.size();i++)
        {
            int n = nums[i]-min_arr[i-1];
            if(n>ret&&n!=0) // ums[i] < nums[j]
                ret = nums[i]-min_arr[i-1]; // 计算最大利润 current_val - min[i-1]
        }
        return ret;
    }
};