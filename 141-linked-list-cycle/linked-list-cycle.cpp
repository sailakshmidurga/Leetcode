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
    bool hasCycle(ListNode *head) {
        bool res = false;
        if(head==nullptr || head->next == nullptr)
        {
           return false;
        }
        ListNode *slow = head;
        ListNode *fast = head;
            while(fast != nullptr && fast->next != nullptr)
                {
                    slow = slow->next;
                    fast = fast->next->next;
                    if(slow==fast)
                    {
                        res = true;
                        break;
                    }
                }

        return res;
    }
};