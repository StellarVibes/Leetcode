// 思路
// 1.int count = 0;
// 2.sort(nums.begin(),nums.end()); //排序
// 3.for(int i = nums.size()-1;i>=2;i--) //从右向左
// 4.int left = 0,right = i-1;
// 5.while(left<right)
// 6.if(nums[left]+nums[right]<=nums[i]) left++; //三角形任意两边之和大于第三边
// 7.else
//         count+=right-left; //计算有效的组合
//         right--; //left不用置零 因为nums[left]+nums[right-1]<=nums[left]+nums[right]
// 8.return count;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/valid-triangle-number/solutions/3843600/611-you-xiao-san-jiao-xing-de-ge-shu-by-ykhda/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());//排序
        for(int i = nums.size()-1;i>=2;i--)//从右向左
        {
            int left = 0,right = i-1;
            while(left<right)
            {
                if(nums[left]+nums[right]<=nums[i])//三角形任意两边之和大于第三边
                {
                    left++;
                }
                else
                {
                    count+=right-left;//计算有效的组合
                    right--;//left不用置零 因为nums[left]+nums[right-1]<=nums[left]+nums[right]
                }
            }
        }
        return count;
    }
};