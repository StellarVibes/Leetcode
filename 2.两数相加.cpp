// 思路
// 1.ListNode* ret = new ListNode();//头节点 ListNode() : val(0), next(nullptr) {}
// 2.ListNode* curr = ret;//保存头节点ret
// 3.计算sum
// 4.curr->next = new ListNode(sum % 10);//ListNode(int x) : val(x), next(nullptr) {}
// 5.carry = sum / 10;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/add-two-numbers/solutions/3814749/2liang-shu-xiang-jia-by-stellarvibes-jy82/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ret = new ListNode();//头节点 ListNode() : val(0), next(nullptr) {}
        ListNode* curr = ret;//保存头节点ret
        while (l1 || l2 || carry) 
        {
            int sum = carry;
            if (l1) //防止越界访问
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) //防止越界访问
            {
                sum += l2->val;
                l2 = l2->next;
            }
            curr->next = new ListNode(sum % 10);//ListNode(int x) : val(x), next(nullptr) {}
            carry = sum / 10;
            curr = curr->next;
        }
        return ret->next;
    }
};
