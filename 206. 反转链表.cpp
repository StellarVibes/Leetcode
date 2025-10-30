// 思路
// 1.if(head ==nullptr) return head;
// 2.vector<int> v; ListNode* tmp = head;
// 3.while(tmp) v.push_back(tmp->val); tmp = tmp->next;
// 4.reverse(v.begin(),v.end());//逆序
// 5.while(tmp) tmp->val = v[i++]; tmp = tmp->next;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/reverse-linked-list/solutions/3819797/206-fan-zhuan-lian-biao-by-stellarvibes-fbxn/
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
    ListNode* reverseList(ListNode* head) {
        if(head ==nullptr) return head;
        vector<int> v;
        ListNode* tmp = head;
        while(tmp)
        {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        reverse(v.begin(),v.end());//逆序
        tmp = head;
        int i = 0;
        while(tmp)
        {
            tmp->val = v[i++];
            tmp = tmp->next;
        }
        return head;
    }
};