// 思路
// 1.struct ListNode* tmp = new ListNode(0); // 头节点
// 2.struct ListNode* ret = tmp; int sum = 0;
// 3.while(head!=nullptr)
// 4.if(head->val==0)
// 5.struct ListNode* node = new ListNode(sum); // 各节点值之和
// 6.tmp->next = node; tmp = node; sum=0;
// 7.else sum+=head->val; // 累加
// 8.head = head->next;
// 9.return ret->next->next; // 跳过第一个零

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/merge-nodes-in-between-zeros/solutions/3895583/2181-he-bing-ling-zhi-jian-de-jie-dian-b-ls8o/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        struct ListNode* tmp = new ListNode(0); // 头节点
        struct ListNode* ret = tmp;
        int sum = 0;
        while(head!=nullptr)
        {
            if(head->val==0)
            {
                struct ListNode* node = new ListNode(sum); // 各节点值之和
                tmp->next = node;
                tmp = node;
                sum=0;
            }
            else sum+=head->val; // 累加
            head = head->next;
        }
        return ret->next->next; // 跳过第一个零
    }
};