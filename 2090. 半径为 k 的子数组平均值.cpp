// 思路
// 1.int n = nums.size(); vector<int> ret(n, -1);//初始化为-1 大小为n
// 2.if (k == 0) return nums;
// 3.if (n < 2 * k + 1) return ret;
// 4.unsigned long long sum = 0; int window = 2 * k + 1;//窗口大小
// 5.for(int i = 0; i < window; ++i) sum += nums[i];//初始窗口下标i前或后不足k个元素,那么半径为k的子数组平均值是-1
// 6.for(int i = k; i + k < n; ++i) ret[i] = sum / window;
//             if (i + k + 1 < n) sum += nums[i + k + 1] - nums[i - k];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/k-radius-subarray-averages/solutions/3827018/2090-ban-jing-wei-k-de-zi-shu-zu-ping-ju-5oci/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ret(n, -1);//初始化为-1 大小为n
        if (k == 0) return nums;
        if (n < 2 * k + 1) return ret;
        unsigned long long sum = 0;
        int window = 2 * k + 1;//窗口大小
        for(int i = 0; i < window; ++i)// 初始窗口 下标i前或后不足k个元素,那么半径为k的子数组平均值是-1
        {
            sum += nums[i];
        }
        for(int i = k; i + k < n; ++i) 
        {
            ret[i] = sum / window;
            if (i + k + 1 < n) 
            {
                sum += nums[i + k + 1] - nums[i - k];
            }
        }
        return ret;
    }
};