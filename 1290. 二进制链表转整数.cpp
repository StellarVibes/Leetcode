// 思路
// 1.vector<int> v;
// 2.while(head)
//             v.insert(v.begin(),head->val);//头插
//             head=head->next;
// 3.int i = 1,sum = 0;
// 4.for(auto&e:v)
//             sum+=e*i; i*=2;//二进制
// 5.return sum;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/convert-binary-number-in-a-linked-list-to-integer/solutions/3823030/1290-er-jin-zhi-lian-biao-zhuan-zheng-sh-f5kp/
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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head)
        {
            v.insert(v.begin(),head->val);//头插
            head=head->next;
        }
        int i = 1,sum = 0;
        for(auto&e:v)
        {
            sum+=e*i;
            i*=2;//二进制
        }
        return sum;
    }
};