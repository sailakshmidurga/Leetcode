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
    ListNode* mergeNodes(ListNode* head) {
     ListNode* t1 = head->next;
     ListNode dummy(0);
     ListNode* tail = &dummy;
     long long val = 0;
     if(head==nullptr || head->next==nullptr) return head;
     while(t1)
     {
        if(t1->val!=0)
        {
            val+=t1->val;
        }
        else
        {
            ListNode* node1 = new ListNode(val,nullptr); 
            tail->next = node1;
            tail = tail->next;
            val = 0;
        }
        t1 = t1->next;
     } 
     return dummy.next;  
    }
};