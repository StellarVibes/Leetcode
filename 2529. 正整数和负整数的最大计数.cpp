// 思路
// 1.int n = nums.size(); int left = 0, right = n;
// 2.while (left < right)  // 找第一个 >= 0 的索引 → 负数个数
//         int mid = (left + right) / 2;
//         if (nums[mid] >= 0) right = mid; else left = mid + 1;
// 3.int neg = left; // 负数个数
// 4.left = 0, right = n;
// 5.while (left < right) // 找第一个 > 0 的索引
//         int mid = (left + right) / 2;
//         if (nums[mid] > 0) right = mid; else left = mid + 1;
// 6.int pos = n - left; // 正数个数
// 7.return max(neg, pos);

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-count-of-positive-integer-and-negative-integer/solutions/3891068/2529-zheng-zheng-shu-he-fu-zheng-shu-de-7gmvh/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n;
        while (left < right)  // 找第一个 >= 0 的索引 → 负数个数
        {
            int mid = (left + right) / 2;
            if (nums[mid] >= 0) right = mid;
            else left = mid + 1;
        }
        int neg = left; // 负数个数
        left = 0, right = n;
        while (left < right) // 找第一个 > 0 的索引
        {
            int mid = (left + right) / 2;
            if (nums[mid] > 0) right = mid;
            else left = mid + 1;
        }
        int pos = n - left; // 正数个数
        return max(neg, pos);
    }
};