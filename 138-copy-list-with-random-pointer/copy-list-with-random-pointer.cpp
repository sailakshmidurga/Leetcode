/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    public:
    Node* getCopyList(Node* head)
    {
        Node* temp = head;
        Node dummy(0);
        Node* res = &dummy;
        while(temp!=nullptr)
        {
            res->next = temp->next;
            res = res->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummy.next;
    }
    public:
    void connectRandom(Node* head)
    {
        Node* temp = head;
        while(temp!=nullptr)
        {
            Node* copyNode = temp->next;
            if(temp->random)
            {
                copyNode->random = temp->random->next;
            }
            else
            {
                copyNode->random = nullptr;
            }
            temp = temp->next->next;
        }
    }
    public: 
    void insert(Node* head)
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            Node* nextNode = temp->next;
            Node* copy = new Node(temp->val);
            copy->next = nextNode;
            temp->next = copy;
            temp = nextNode;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        insert(head);
        connectRandom(head);
       return  getCopyList(head);
    }
};