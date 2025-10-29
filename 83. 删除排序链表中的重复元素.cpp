// 思路
// 1.while(head->next!=nullptr&&head->val==head->next->val) head=head->next; //去重
// 2.ListNode* tmp = head; ListNode* prev = head; tmp = tmp->next;//方便修改指向
// 3.if(prev->val!=tmp->val)
// 4.while(tmp->next!=nullptr&&tmp->val==tmp->next->val) tmp=tmp->next; //去重
// 5.prev->next = tmp; prev = tmp;  tmp = tmp->next;//修改指向
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/remove-duplicates-from-sorted-list/solutions/3818330/83-shan-chu-pai-xu-lian-biao-zhong-de-zh-q8sd/
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return nullptr;
        while(head->next!=nullptr&&head->val==head->next->val)//去重
        {
            head=head->next;
        }
        ListNode* tmp = head;
        ListNode* prev = head;//方便修改指向
        tmp = tmp->next;
        while(tmp)
        {
            if(prev->val!=tmp->val)
            {
                while(tmp->next!=nullptr&&tmp->val==tmp->next->val)//去重
                {
                    tmp=tmp->next;
                }
                prev->next = tmp;//修改指向
                prev = tmp;
                tmp = tmp->next;
            }
        }
        return head;
    }
};