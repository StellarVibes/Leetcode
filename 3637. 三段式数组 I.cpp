// 思路
// 1.int i = 1;
// 2.while(i<nums.size() && nums[i]>nums[i-1]) i++; // nums[0...p] 严格递增
// 3.if(i==nums.size() || i==1) return false;
// 4.while(i<nums.size() && nums[i]<nums[i-1]) i++; // nums[p...q] 严格递减
// 5.if(i==nums.size()) return false;
// 6.while(i<nums.size() && nums[i]>nums[i-1]) i++; // nums[q...n − 1] 严格递增
// 7.if(i!=nums.size()) return false;
// 8.return true;

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/trionic-array-i/solutions/3895174/3637-san-duan-shi-shu-zu-i-by-stellarvib-vltc/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i = 1;
        while(i<nums.size() && nums[i]>nums[i-1]) // nums[0...p] 严格 递增
        {
            i++;
        }
        if(i==nums.size() || i==1) return false;
        while(i<nums.size() && nums[i]<nums[i-1]) // nums[p...q] 严格 递减
        {
            i++;
        }
        if(i==nums.size()) return false;
        while(i<nums.size() && nums[i]>nums[i-1]) // nums[q...n − 1] 严格 递增
        {
            i++;
        }
        if(i!=nums.size()) return false;
        return true;
    }
};