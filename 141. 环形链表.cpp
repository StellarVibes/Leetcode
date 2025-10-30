// 思路
// 1.if(head==nullptr||head->next==nullptr) return false;
// 2.ListNode *fast= head->next,*slow = head;
// 3.while(slow&&fast&&fast!=slow)//fast==slow 有环
// 4.if(fast->next) fast=fast->next->next; //fast在前 如果fast追上slow 即有环
//     else return false;//无环 slow = slow->next;
// 5.if(fast==nullptr) return false;//fastg刚好为nullptr时跳出while循环
// 6.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/linked-list-cycle/solutions/3819543/141-huan-xing-lian-biao-by-stellarvibes-w5xn/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr) return false;
        ListNode *fast= head->next,*slow = head;
        while(slow&&fast&&fast!=slow)//fast==slow 有环
        {
            if(fast->next)
                fast=fast->next->next; //fast在前 如果fast追上slow 即有环
            else return false;//无环
            slow = slow->next;
        }
        if(fast==nullptr) return false;//fastg刚好为nullptr时跳出while循环
        return true;
    }
};