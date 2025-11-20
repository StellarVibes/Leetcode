// 思路
// 1.vector<int> v(nums.begin(),nums.end());
// 2.int n = nums.size(); vector<int> ret; unordered_map<int,int> map;
// 3.sort(v.begin(),v.end()); //排序确定位置
// 4.for(int i = 0;i<v.size();i++) map.insert({v[i],i}); //记录元素和大小位置
// 5.for(auto&e:nums) ret.push_back(map[e]);
// 6.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/how-many-numbers-are-smaller-than-the-current-number/solutions/3837620/136-you-duo-shao-xiao-yu-dang-qian-shu-z-ia30/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ret;
        unordered_map<int,int> map;
        sort(v.begin(),v.end());//排序确定位置
        for(int i = 0;i<v.size();i++) map.insert({v[i],i});//记录元素和大小位置
        for(auto&e:nums) ret.push_back(map[e]);
        return ret;
    }
};