class LRUCache {
    public:
   class Node {
    public:
    int key;
    int val;
    Node *prev;
    Node *next;
   Node(int key,int val){
        this->key = key;
        this->val = val;
   }
};
   Node *head = new Node(-1,-1);
   Node *tail = new Node(-1,-1);
    int capacity;
    unordered_map<int,Node*>mp;
    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev= head;
    }
    void addNode(Node* newNode){
        Node *curr = head;
        newNode->prev = head;
        newNode->next = curr->next;
        curr->next->prev = newNode;
        curr->next = newNode;
    }
    void deleteNode(Node* node)
    {
        node->next->prev = node->prev;
        node->prev->next = node->next;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end())
        {
            Node* node = mp[key];
            mp.erase(key);
            deleteNode(node);
            addNode(node);
            mp[key] = head->next;
            return node->val;
        }
         return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end())
        {
            Node* node = mp[key];
            deleteNode(node);
            mp.erase(key);
            node->val = value;

        }
        if(mp.size() == capacity)
        {
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
          addNode(new Node(key,value));
          mp[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */