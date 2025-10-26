// 思路
// 1.if(head->next==nullptr) return nullptr;//非法访问
// 2.while(tmp)//计算总个数 { tmp = tmp->next; count++;}
// 3.n = count-n; tmp = head;
// 4.if(n == 0) return head->next;//n==0
// 5.while(n>1){ tmp = tmp->next; n--; }
// 6. //cur = tmp->next free(cur)
//      tmp->next = tmp->next->next;//指向next.next
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/remove-nth-node-from-end-of-list/solutions/3815977/19shan-chu-lian-biao-de-dao-shu-di-nge-j-rcfa/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr) return nullptr;//非法访问
        ListNode* tmp = head;
        int count = 0;//计算总个数
        while(tmp)
        {
            tmp = tmp->next;
            count++;
        }
        n = count-n;
        tmp = head;
        if(n == 0) return head->next;//n==0
        while(n>1)
        {
            tmp = tmp->next;
            n--;
        }
        //cur = tmp->next free(cur)
        tmp->next = tmp->next->next;//指向next.next
        return head;
    }
};