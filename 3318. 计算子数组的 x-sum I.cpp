// 思路
// 1.struct compare {
//         bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
//                   if (a.second == b.second) return a.first > b.first;//如果出现次数相同 比较元素大小
//                   return a.second > b.second;}};
// 2.vector<int> ret; int n = nums.size();
// 3.for (int i = 0; i <= n - k; i++) 
// 4.unordered_map<int, int> freqMap;//保存元素和对应的出现次数
// 5.for (int j = i; j < i + k; j++) freqMap[nums[j]]++;
// 6.vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());//通过vector来排序
// 7.sort(freqVec.begin(), freqVec.end(), compare());//排序
// 8.for(int num = 0; num < x && num < freqVec.size(); num++)//数组中的不同元素少于x个,则x-sum是数组的元素总和
//             sum += freqVec[num].first * freqVec[num].second; ret.push_back(sum);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-x-sum-of-all-k-long-subarrays-i/solutions/3822925/3318-ji-suan-zi-shu-zu-de-x-sum-i-by-ste-1xms/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    struct compare {
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
            if (a.second == b.second) return a.first > b.first;//如果出现次数相同 比较元素大小
            return a.second > b.second;
        }
    };
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ret;
        int n = nums.size();
        for (int i = 0; i <= n - k; i++) 
        {
            unordered_map<int, int> freqMap;//保存元素和对应的出现次数
            for (int j = i; j < i + k; j++) 
            {
                freqMap[nums[j]]++;
            }
            vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());//通过vector来排序
            sort(freqVec.begin(), freqVec.end(), compare());//排序
            int sum = 0;
            for (int num = 0; num < x && num < freqVec.size(); num++)//数组中的不同元素少于x个,则x-sum是数组的元素总和
            {
                sum += freqVec[num].first * freqVec[num].second;
            }
            ret.push_back(sum);
        }
        return ret;
    }
};