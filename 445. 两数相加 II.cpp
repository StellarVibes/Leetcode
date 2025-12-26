// 思路
// 1.ListNode* tmp1 = l1, *tmp2 = l2; vector<int> v1, v2;
// 2.while (tmp1) v1.push_back(tmp1->val); tmp1 = tmp1->next;
// 3.while (tmp2) v2.push_back(tmp2->val); tmp2 = tmp2->next;
// 4.ListNode* dummy = new ListNode(0); //方便头插
// 5.int carry = 0,  i = v1.size() - 1, j = v2.size() - 1;
// 6.while (i >= 0 || j >= 0 || carry != 0) 
//             int num1 = (i >= 0) ? v1[i] : 0; int num2 = (j >= 0) ? v2[j] : 0; int sum = num1 + num2 + carry; carry = sum / 10;
//             ListNode* node = new ListNode(sum % 10); node->next = dummy->next; dummy->next = node;
//             if (i >= 0) i--; if (j >= 0) j--;
// 7.return dummy->next;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/add-two-numbers-ii/solutions/3853371/445-liang-shu-xiang-jia-ii-by-stellarvib-70je/
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
        ListNode* tmp1 = l1, *tmp2 = l2;
        vector<int> v1, v2;
        while (tmp1) 
        {
            v1.push_back(tmp1->val);
            tmp1 = tmp1->next;
        }
        while (tmp2) 
        {
            v2.push_back(tmp2->val);
            tmp2 = tmp2->next;
        }
        ListNode* dummy = new ListNode(0); //方便头插
        int carry = 0, i = v1.size() - 1, j = v2.size() - 1;
        while (i >= 0 || j >= 0 || carry != 0) 
        {
            int num1 = (i >= 0) ? v1[i] : 0;
            int num2 = (j >= 0) ? v2[j] : 0;
            int sum = num1 + num2 + carry;
            carry = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            node->next = dummy->next;
            dummy->next = node;
            if (i >= 0) i--;
            if (j >= 0) j--;
        }
        return dummy->next;
    }
};