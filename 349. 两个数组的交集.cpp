// 思路
// 1.unordered_set<int> set1{nums1.begin(),nums1.end()}; 
// 2.unordered_set<int> set2{nums2.begin(),nums2.end()};//构造
// 3.vector<int> ret;
// 4.for(auto&e:set1) if(set2.count(e)) ret.push_back(e);//同时存在为交集
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/intersection-of-two-arrays/solutions/3832937/349-liang-ge-shu-zu-de-jiao-ji-by-stella-d7yn/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1{nums1.begin(),nums1.end()};
        unordered_set<int> set2{nums2.begin(),nums2.end()};//构造
        vector<int> ret;
        for(auto&e:set1)
        {
            if(set2.count(e)) ret.push_back(e);//同时存在为交集
        }
        return ret;
    }
};