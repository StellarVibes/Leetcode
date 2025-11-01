// 思路
// 1.priority_queue<pair<int,int>> pq; //大堆
// 2.for(int i = 0;i<nums.size();i++) pq.push({nums[i],i}); //把值和下标的保存
// 3.auto num1 = pq.top(); //取最大值 pq.pop();
// 4.auto num2 = pq.top(); //取次大值
// 5.if(num1.first>=num2.first*2) return num1.second; else return -1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/largest-number-at-least-twice-of-others/solutions/3820791/747-zhi-shao-shi-qi-ta-shu-zi-liang-bei-y4cq2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;//大堆
        for(int i = 0;i<nums.size();i++) pq.push({nums[i],i});//把值和下标的保存
        auto num1 = pq.top();//取最大值
        pq.pop();
        auto num2 = pq.top();//取次大值
        if(num1.first>=num2.first*2) return num1.second;
        else return -1;
    }
};