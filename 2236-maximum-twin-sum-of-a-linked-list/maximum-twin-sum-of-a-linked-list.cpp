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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=nullptr)
        {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }
public:
    int pairSum(ListNode* head) {
        int maxSum = 0;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = head;
        ListNode* prev = reverse(slow);
        ListNode* t1 = head;
        ListNode* t2 = prev;
        while(t2!=nullptr)
        {
            maxSum = max(maxSum,(t1->val+t2->val));
            t2 = t2->next;
            t1 = t1->next;
        }
        reverse(prev);
        return maxSum;
    }
};