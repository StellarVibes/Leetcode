// 思路
// 一、
// 1.struct compare
//         bool operator()(const pair<int,int>& x, const pair<int,int>& y) const {
//             return x.second > y.second; // 按出现次数从大到小排序
// 2.int threshold = arr.size() / 4;
// 3.unordered_map<int, int> mp;
// 4.for (auto& e : arr) mp[e]++;
// 5.vector<pair<int, int>> vv(mp.begin(), mp.end()); // 先构造向量，再排序
// 6.sort(vv.begin(), vv.end(), compare());
// 7.return vv[0].first;// 排序后第一个元素即为出现次数最多的，必然超过 1/4

// 二、
// 1.int nums[100001]={0};//0 <= arr[i] <= 10^5
// 2.int tmp = 0,ret = INT_MAX;
// 3.for(auto&e:arr) nums[e]++;
// 4.if(nums[e]>tmp) //保存最大值
//            tmp = nums[e]; ret = e;
// 5.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/element-appearing-more-than-25-in-sorted-array/solutions/3823016/1287-you-xu-shu-zu-zhong-chu-xian-ci-shu-vhh1/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    // struct compare {
    //     bool operator()(const pair<int,int>& x, const pair<int,int>& y) const {
    //         return x.second > y.second; // 按出现次数从大到小排序
    //     }
    // };
    int findSpecialInteger(vector<int>& arr) {
        // int threshold = arr.size() / 4;
        // unordered_map<int, int> mp;
        // for (auto& e : arr) mp[e]++;
        // vector<pair<int, int>> vv(mp.begin(), mp.end()); // 先构造向量，再排序
        // sort(vv.begin(), vv.end(), compare());
        // return vv[0].first;// 排序后第一个元素即为出现次数最多的，必然超过 1/4

        int nums[100001]={0};//0 <= arr[i] <= 10^5
        int tmp = 0,ret = INT_MAX;
        for(auto&e:arr) 
        {
            nums[e]++;
            if(nums[e]>tmp) //保存最大值
            {
                tmp = nums[e];
                ret = e;
            }
        }
        return ret;
    }
};