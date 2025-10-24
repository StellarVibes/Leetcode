// 思路
// 1.priority_queue<int> left;//大堆 left.top()<right.top()
// 2.priority_queue<int,std::vector<int>,std::greater<int>> right;//小堆
// 3.if(left.size()==0||e<left.top())//left.size()==0避免死循环
// 4.if(left.size()>right.size()+1) else if(right.size()>left.size()+1)//调整left和right
// 5.if(left.size()==right.size()) return left.top()/2.0+right.top()/2.0;else return left.size()>right.size()?left.top():right.top();
// Code
// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/median-of-two-sorted-arrays/solutions/3814852/4xun-zhao-liang-ge-zheng-xu-shu-zu-de-zh-9o6j/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int> left;//大堆 left.top()<right.top()
        priority_queue<int,std::vector<int>,std::greater<int>> right;//小堆
        for(auto &e :nums1)
        {
            if(left.size()==0||e<left.top())//left.size()==0避免死循环
                left.push(e);
            else{
                right.push(e);
            }
            if(left.size()>right.size()+1)//调整left和right
            {
                right.push(left.top());
                left.pop();
            }
            else if(right.size()>left.size()+1)
            {
                left.push(right.top());
                right.pop();
            }
        }
        for(auto &e :nums2)
        {
            if(left.size()==0||e<left.top())
                left.push(e);
            else{
                right.push(e);
            }
            if(left.size()>right.size()+1)
            {
                right.push(left.top());
                left.pop();
            }
            else if(right.size()>left.size()+1)
            {
                left.push(right.top());
                right.pop();
            }
        }
        if(left.size()==right.size()) return left.top()/2.0+right.top()/2.0;
        else return left.size()>right.size()?left.top():right.top();
    }
};