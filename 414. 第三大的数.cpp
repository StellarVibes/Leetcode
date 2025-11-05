// 思路
// 1.unordered_set<int> set;
// 2.for(auto&e:nums) set.insert(e);//去重
// 3.vector<int> v(set.begin(),set.end());//构造vector排序
// 4.sort(v.begin(),v.end());//升序
// 5.if(v.size()<3) return v[v.size()-1];//vector::size() 返回的是无符号整数（size_t）
// 6.return v[v.size()-3];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/third-maximum-number/solutions/3823947/414-di-san-da-de-shu-by-stellarvibes-z81e/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> set;
        for(auto&e:nums) set.insert(e);//去重
        vector<int> v(set.begin(),set.end());//构造vector排序
        sort(v.begin(),v.end());//升序
        if(v.size()<3) return v[v.size()-1];//vector::size() 返回的是无符号整数（size_t）
        return v[v.size()-3];
    }
};