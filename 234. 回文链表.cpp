// 思路
// 1.vector<int> v;
// 2. while(tmp) v.push_back(tmp->val); tmp = tmp->next;
// 3.int left = 0,right = v.size()-1;
// 4.while(left<right)
//             if(v[left]!=v[right]) return false;//不相等就不是回文数
//             left++; right--;
// 5.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/palindrome-linked-list/solutions/3820030/234-hui-wen-lian-biao-by-stellarvibes-1u89/
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
    bool isPalindrome(ListNode* head) {
        ListNode* tmp = head;
        vector<int> v;
        while(tmp)
        {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        int left = 0,right = v.size()-1;
        while(left<right)
        {
            if(v[left]!=v[right]) return false;//不相等就不是回文数
            left++;
            right--;
        }
        return true;
    }
};