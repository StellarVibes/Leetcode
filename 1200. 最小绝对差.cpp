// 思路
// 1.sort(arr.begin(),arr.end());//排序
// 2.unordered_map<int,vector<vector<int>>> mp;
// 3.int ret = INT_MAX;
// 4.for(int i = 0;i<arr.size()-1;i++)
//             vector<int> v; int result = arr[i+1]-arr[i];
//             if(result<=ret)  ret = result; //所有具有最小绝对差的元素对
//                     v.push_back(arr[i]); v.push_back(arr[i+1]); mp[ret].push_back(v);
// 5,return mp[ret];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-absolute-difference/solutions/3821467/1200-zui-xiao-jue-dui-chai-by-stellarvib-98kl/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());//排序
        unordered_map<int,vector<vector<int>>> mp;
        int ret = INT_MAX;
        for(int i = 0;i<arr.size()-1;i++)
        {
            vector<int> v;
            int result = arr[i+1]-arr[i];
            if(result<=ret)//所有具有最小绝对差的元素对
            {
                ret = result;
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                mp[ret].push_back(v);
            }
        }
        return mp[ret];
    }
};