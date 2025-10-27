// 思路
// 1.while(tmp->next!=nullptr)//链接list2
// 2.v.push_back(tmp->val);  tmp ->next = list2; tmp = list2;
// 3.while(tmp!=nullptr)
// 4.sort(v.begin(),v.end());//排序
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/merge-two-sorted-lists/solutions/3816727/21he-bing-liang-ge-you-xu-lian-biao-by-s-mm2f/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr) return list2;//越界
        if(list2==nullptr) return list1;//越界
        ListNode* tmp = list1,*cur = list1;
        vector<int> v;
        while(tmp->next!=nullptr)//链接list2
        {
            v.push_back(tmp->val);
            tmp = tmp ->next;
        }
        v.push_back(tmp->val);
        tmp ->next = list2;
        tmp = list2;
        while(tmp!=nullptr)
        {
            v.push_back(tmp->val);
            tmp = tmp ->next;
        }
        sort(v.begin(),v.end());//排序
        for(auto &e:v)
        {
            cur->val = e;
            cur= cur->next;
        }
        return list1;
    }
};