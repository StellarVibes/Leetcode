// 思路
// 1.vector<int> v;
// 2.for(int i = 0;i<m;i++) v.push_back(nums1[i]); for(auto&e:nums2) v.push_back(e);
// 3.sort(v.begin(),v.end());//合并成一个数组排序
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/merge-sorted-array/solutions/3818356/88-he-bing-liang-ge-you-xu-shu-zu-by-ste-furs/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0) nums1= nums2;
        else
        {
            vector<int> v;
            for(int i = 0;i<m;i++) v.push_back(nums1[i]);
            for(auto&e:nums2) v.push_back(e);
            sort(v.begin(),v.end());//合并成一个数组排序
            nums1 = v;
        }
    }
};