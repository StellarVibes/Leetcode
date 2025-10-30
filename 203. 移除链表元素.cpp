// 思路
// 1.while(head&&head->val==val)//head==nullptr 或者head的值为val  head = head->next;
// 2.if(head==nullptr) return head;//如果head为空 返回head
// 3.ListNode* prev = head,*tmp = head->next;
// 4.if(tmp->val ==val)//用prev重新指向next prev->next = tmp->next; tmp = prev ->next;
// 5.else prev = tmp; tmp = tmp->next;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/remove-linked-list-elements/solutions/3819790/203-yi-chu-lian-biao-yuan-su-by-stellarv-buhc/
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head&&head->val==val)//head==nullptr 或者head的值为val
        {
            head = head->next;
        }
        if(head==nullptr) return head;//如果head为空 返回head
        ListNode* prev = head,*tmp = head->next;
        while(tmp)
        {
            if(tmp->val ==val)//用prev重新指向next
            {
                prev->next = tmp->next;
                tmp = prev ->next;
            }
            else 
            {
                prev = tmp;
                tmp = tmp->next;
            }
        }
        return head;
    }
};