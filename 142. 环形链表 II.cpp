// 思路
// 1.// 边界情况处理：空链表或只有一个节点，肯定无环
// if (head == nullptr || head->next == nullptr) return nullptr;
// 2.ListNode *fast = head; ListNode *slow = head;
// 3.// 判断是否有环，并找到快慢指针的相遇点
// while (fast != nullptr && fast->next != nullptr) 
//           slow = slow->next;          // 慢指针每次走一步
//           fast = fast->next->next;    // 快指针每次走两步
// 4.if (slow == fast)  ListNode *finder = head;
// 5.while (finder != slow) 
//             finder = finder->next;
//             slow = slow->next;
// 6. return finder; // 返回环的入口节点
// 7.//如果快指针走到了链表末尾，说明没有环
// return nullptr;

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/linked-list-cycle-ii/solutions/3956497/142-huan-xing-lian-biao-ii-by-stellarvib-63y0/
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
    ListNode *detectCycle(ListNode *head) {
        // 边界情况处理：空链表或只有一个节点，肯定无环
        if (head == nullptr || head->next == nullptr) return nullptr;
        
        ListNode *fast = head;
        ListNode *slow = head;

        // 判断是否有环，并找到快慢指针的相遇点
        while (fast != nullptr && fast->next != nullptr) 
        {
            slow = slow->next;          // 慢指针每次走一步
            fast = fast->next->next;    // 快指针每次走两步

            if (slow == fast) 
            {
                ListNode *finder = head;
                while (finder != slow) 
                {
                    finder = finder->next;
                    slow = slow->next;
                }
                return finder; // 返回环的入口节点
            }
        }

        //如果快指针走到了链表末尾，说明没有环
        return nullptr;
    }
};