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
        ListNode dummy(0);
        ListNode* prev = &dummy;
        prev->next = head;
        ListNode *curr = head;
        unordered_set<int>s(nums.begin(),nums.end());
        while(curr!=nullptr)
        {
            if(s.count(curr->val))
            {
                prev->next = curr->next;
                curr = curr->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy.next;
    }
};