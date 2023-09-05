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
    Node* copyRandomList(Node* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<Node*, Node*> mp;

        Node* ptr = head;

        while(ptr) {
            mp[ptr] = new Node(ptr -> val);
            ptr = ptr -> next;
        }

        ptr = head;

        while(ptr) {
            mp[ptr] -> random = mp[ptr -> random];
            mp[ptr] -> next = mp[ptr -> next];
            ptr = ptr -> next;
        }

        return mp[head];
    }
};