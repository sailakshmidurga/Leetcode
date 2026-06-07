class LRUCache {
    public:
    class Node{
        public:
        int key;
        int val;
        Node* next;
        Node* prev;
        Node(int key , int val)
        {
            this->key = key;
            this->val = val;
        }
    };
    int capacity;
    unordered_map<int,Node*>mpp;
     Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void deleteNode(Node* head)
    {
        head->prev->next = head->next;
        head->next->prev = head->prev;
    }

    void addNode(Node* newNode)
    {
        Node* curr = head;
        newNode->prev = head;
        newNode->next = curr->next;
        curr->next->prev = newNode;
        curr->next = newNode;
    }
    
    int get(int key) {
        if(mpp.find(key)!=mpp.end())
        {
            Node* node = mpp[key];
            mpp.erase(key);
            deleteNode(node);
            addNode(node);
            mpp[key] = head->next;
            return node->val;
        }
    return -1;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!= mpp.end())
        {
            Node* node = mpp[key];
            deleteNode(mpp[key]);
            mpp.erase(key);
            node->val = value;
        }
        if(mpp.size() == capacity)
        {
            Node* node = tail->prev;
            mpp.erase(tail->prev->key);
            deleteNode(node);
        }
        addNode(new Node (key,value));
            mpp[key] = head->next;
    }
};



/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */