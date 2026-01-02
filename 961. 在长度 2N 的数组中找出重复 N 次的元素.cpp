// 思路
// 1.unsigned long long arr[10010]={0}; //0 <= nums[i] <= 104
// 2.for(auto&e:nums)
// 3.if(arr[e]!=0) return e; // nums 中恰有一个元素重复 n 次
// 4.arr[e]++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/n-repeated-element-in-size-2n-array/solutions/3871199/961-zai-chang-du-2n-de-shu-zu-zhong-zhao-3ynl/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unsigned long long arr[10010]={0}; //0 <= nums[i] <= 104
        for(auto&e:nums)
        {
            if(arr[e]!=0) return e; // nums 中恰有一个元素重复 n 次
            arr[e]++;
        }
        return -1;
    }
};