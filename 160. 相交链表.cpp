// 思路
// 1.ListNode *tmp =headA, *tmp2 = headB;
// 2.while(tmp)//计算headA长度 len++; tmp = tmp ->next;
// 3. while(tmp2)//计算headB长度 len2++; tmp2 = tmp2 ->next;
// 4.ListNode *longList =headA,*shortList = headB;//假设长和短链表
//         if(len<len2) longList =headB; shortList = headA;
// 5.int num = abs(len-len2);//绝对值
// 6.while(num--) longList=longList->next;//同一长度起始点
// 7.while(longList&&shortList)
//             if(longList==shortList) return longList;//相同节点返回
//             longList = longList->next; shortList = shortList->next;
// 8.return nullptr;//到空节点还没有找到相同点 两链表不相交
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/intersection-of-two-linked-lists/solutions/3819755/160-xiang-jiao-lian-biao-by-stellarvibes-ggeo/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmp =headA, *tmp2 = headB;
        int len = 0,len2 = 0;
        while(tmp)//计算headA长度
        {
            len++;
            tmp = tmp ->next;
        }
        while(tmp2)//计算headB长度
        {
            len2++;
            tmp2 = tmp2 ->next;
        }
        ListNode *longList =headA,*shortList = headB;//假设长和短链表
        if(len<len2)
        {
            longList =headB;
            shortList = headA;
        }
        int num = abs(len-len2);//绝对值
        while(num--) longList=longList->next;//同一长度起始点
        while(longList&&shortList)
        {
            if(longList==shortList) return longList;//相同节点返回
            longList = longList->next;
            shortList = shortList->next;
        }
        return nullptr;//到空节点还没有找到相同点 两链表不相交
    }
};