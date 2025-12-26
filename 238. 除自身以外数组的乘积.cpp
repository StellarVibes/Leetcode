// 思路
// 1.vector<int> left(nums.size()+1,1),right(nums.size()+1,1),ret(nums.size(),0);
// 2.for(int i = 0;i<nums.size();i++) left[i+1]=left[i]*nums[i];//左前缀和(不包括本身)
// 3.for(int i = 0;i<nums.size();i++) cout<<left[i]<<" ";
// 4.for(int i = nums.size()-1;i>=0;i--) right[i]=right[i+1]*nums[i];////右前缀和(不包括本身)
// 5.for(int i = 1;i<=nums.size();i++) cout<<right[i]<<" ";
// 6.for(int i = 0;i<nums.size();i++) ret[i]=left[i]*right[i+1];// [1,left]  [right,1]
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/product-of-array-except-self/solutions/3866649/238-chu-zi-shen-yi-wai-shu-zu-de-cheng-j-daxc/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size()+1,1),right(nums.size()+1,1),ret(nums.size(),0);
        for(int i = 0;i<nums.size();i++)
        {
            left[i+1]=left[i]*nums[i];//左前缀和(不包括本身)
        }
        //for(int i = 0;i<nums.size();i++) cout<<left[i]<<" ";
        for(int i = nums.size()-1;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i];////右前缀和(不包括本身)
        }
        //for(int i = 1;i<=nums.size();i++) cout<<right[i]<<" ";
        for(int i = 0;i<nums.size();i++)// [1,left]  [right,1]
        {
            ret[i]=left[i]*right[i+1];
        }
        return ret;
    }
};