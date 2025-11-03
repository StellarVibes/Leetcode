// 思路
// 1.ListNode* tmp = head;
// 2.int len = 0;
// 3.while(tmp) len++; tmp = tmp->next;
// 4.len=len/2; //计算全部节点个数除二
// 5.while(len--) head = head->next;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/middle-of-the-linked-list/solutions/3822176/876-lian-biao-de-zhong-jian-jie-dian-by-hgq8g/
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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        int len = 0;
        while(tmp)
        {
            len++;
            tmp = tmp->next;
        }
        len=len/2;//计算全部节点个数除二
        while(len--) head = head->next;
        return head;
    }
};