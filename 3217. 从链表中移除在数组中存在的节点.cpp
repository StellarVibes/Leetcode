// 思路
// 1.unordered_set<int> st;//set保存nums的值
// 2.for(auto&e:nums) st.insert(e);
// 3.while(head)
//             if(st.count(head->val)) head = head->next;//去除首元素与nums的相同值
//             else break;
// 4.ListNode* prev = head;//方便修改next ListNode* tmp = head->next;
// 5.while(tmp) if(st.count(tmp->val)) prev->next = tmp->next; else prev = tmp; tmp = tmp->next;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/delete-nodes-from-linked-list-present-in-array/solutions/3820807/3217-cong-lian-biao-zhong-yi-chu-zai-shu-747v/
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;//set保存nums的值
        for(auto&e:nums) st.insert(e);
        while(head)
        {
            if(st.count(head->val)) head = head->next;//去除首元素与nums的相同值
            else break;
        }
        ListNode* prev = head;//方便修改next
        ListNode* tmp = head->next;
        while(tmp)
        {
            if(st.count(tmp->val))
            {
                prev->next = tmp->next;
            }
            else prev = tmp;
            tmp = tmp->next;
        }
        return head;
    }
};