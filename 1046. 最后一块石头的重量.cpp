// 思路
// 1.priority_queue<int> pq; // 大堆
// 2.for(auto&e:stones) pq.push(e); 
// 3.while(pq.size()>1)
// 4.int x = pq.top();pq.pop();
// 5.int y = pq.top();pq.pop();
// 6.pq.push(abs(x-y)); // 粉碎后的石头
// 7.return pq.top();

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/last-stone-weight/solutions/3893346/1046-zui-hou-yi-kuai-shi-tou-de-zhong-li-gm3r/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq; // 大堆
        for(auto&e:stones) pq.push(e); 
        while(pq.size()>1)
        {
            int x = pq.top();pq.pop();
            int y = pq.top();pq.pop();
            pq.push(abs(x-y)); // 粉碎后的石头
        }
        return pq.top();
    }
};