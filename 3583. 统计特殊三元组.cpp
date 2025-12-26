// 思路
// 1.const int MOD = 1e9 + 7; int n = nums.size(),total = 0;
// 2.if (n < 3) return 0; // 不足3个元素，直接返回0
// 3.unordered_map<int, int> left_map; // 记录j左侧各数值的出现次数
//     unordered_map<int, int> right_map; // 记录j右侧各数值的出现次数
// 4.for (int num : nums)  right_map[num]++; // 初始化right_map：先把所有元素放入右侧
// 5.for (int j = 0; j < n; ++j)  // 遍历每个j，逐步将元素从右侧移到左侧
//             int curr = nums[j];
//             right_map[curr]--; // 当前j的元素移出右侧
//             if (right_map[curr] == 0) right_map.erase(curr); // 频次为0时删除，减少后续查找开销
//             int target = 2 * curr; // nums[k]== nums[i] == nums[j] * 2
//             int left = left_map.count(target) ? left_map[target] : 0;// 左侧target的数量：left_map中的频次
//             int right = right_map.count(target) ? right_map[target] : 0;// 右侧target的数量：right_map中的频次
//             total = (total + (long long)left * right) % MOD;
//             left_map[curr]++; // 当前j的元素移入左侧
// 6.return total;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-special-triplets/solutions/3853348/3583-tong-ji-te-shu-san-yuan-zu-by-stell-x0bb/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int n = nums.size(),total = 0;
        if (n < 3) return 0; // 不足3个元素，直接返回0
        unordered_map<int, int> left_map; // 记录j左侧各数值的出现次数
        unordered_map<int, int> right_map; // 记录j右侧各数值的出现次数
        for (int num : nums) // 初始化right_map：先把所有元素放入右侧
        {
            right_map[num]++;
        }
        for (int j = 0; j < n; ++j)  // 遍历每个j，逐步将元素从右侧移到左侧
        {
            int curr = nums[j];
            right_map[curr]--; // 当前j的元素移出右侧
            if (right_map[curr] == 0) 
            {
                right_map.erase(curr); // 频次为0时删除，减少后续查找开销
            }
            int target = 2 * curr; // nums[k]== nums[i] == nums[j] * 2
            int left = left_map.count(target) ? left_map[target] : 0;// 左侧target的数量：left_map中的频次
            int right = right_map.count(target) ? right_map[target] : 0;// 右侧target的数量：right_map中的频次
            total = (total + (long long)left * right) % MOD;
            left_map[curr]++; // 当前j的元素移入左侧
        }
        return total;
    }
};