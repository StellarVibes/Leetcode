// 思路
// 1.sort(nums.begin(),nums.end());
// 2.int count = 0,ret = 0;
// 3.for(int left = 0,right = 0;right<nums.size();right++)
// 4.count++;
// 5.if((long long)nums[right]>(long long)nums[left]*k) //最大元素的值至多是最小元素的k倍
// 6.while(count>ret && left <= right && nums[right] > nums[left] * k) left++; count--;
// // [left,right] count>ret -> 减少循环次数
// 7.ret = max(ret,count);
// 8.else ret = max(ret,count);
// 9.return nums.size()-ret;

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-removals-to-balance-array/solutions/3897456/3634-shi-shu-zu-ping-heng-de-zui-shao-yi-taeb/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0,ret = 0;
        for(int left = 0,right = 0;right<nums.size();right++)
        {
            count++;
            if((long long)nums[right]>(long long)nums[left]*k) //最大元素的值至多是最小元素的k倍
            {
                while(count>ret && left<=right && nums[right]>nums[left]*k) // [left,right] count>ret -> 减少循环次数
                {
                    left++;
                    count--;
                }
                ret = max(ret,count);
            }
            else ret = max(ret,count);
        }
        return nums.size()-ret;
    }
};