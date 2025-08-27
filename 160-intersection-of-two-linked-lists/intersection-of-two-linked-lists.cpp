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
        if(!headA || !headB) return headA;
        ListNode * node1 = headA;
        ListNode * node2 = headB;
        while(node1!=node2)
        {
            node1 = node1?node1->next:headB;
            node2 = node2?node2->next : headA;
        }
        return node1;
    }
};