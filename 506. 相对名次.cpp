// 思路
// 1.int n = score.size(); vector<string> ret(n); vector<pair<int, int>> arr;// 存储 <分数, 索引> 并降序排序
// 2.for (int i = 0; i < n; i++) arr.push_back({score[i], i});
// 3.sort(arr.begin(), arr.end(), greater<pair<int, int>>());// 按分数降序排列
// 4.for (int i = 0; i < n; i++) int idx = arr[i].second;
// 5.if (i == 0) ret[idx] = "Gold Medal";
// 6.else if (i == 1) ret[idx] = "Silver Medal";
// 7.else if (i == 2) ret[idx] = "Bronze Medal";
// 8.else ret[idx] = to_string(i + 1);

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/relative-ranks/solutions/3892303/506-xiang-dui-ming-ci-by-stellarvibes-dmaf/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ret(n);
        vector<pair<int, int>> arr;// 存储 <分数, 索引> 并降序排序
        for (int i = 0; i < n; i++) 
        {
            arr.push_back({score[i], i});
        }
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());// 按分数降序排列
        for (int i = 0; i < n; i++) 
        {
            int idx = arr[i].second;
            if (i == 0) ret[idx] = "Gold Medal";
            else if (i == 1) ret[idx] = "Silver Medal";
            else if (i == 2) ret[idx] = "Bronze Medal";
            else ret[idx] = to_string(i + 1);
        }
        return ret;
    }
};