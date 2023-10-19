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
    ListNode* deleteDuplicates(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        ListNode* ptr = head;
        unordered_map <int, int> mp;

        while(ptr) {
            mp[ptr -> val]++;
            ptr = ptr -> next;
        }

        ptr = head;
        ListNode* newPtr = new ListNode();
        head = newPtr;

        while(ptr) {
            if(mp[ptr -> val] == 1) {
                newPtr -> next = new ListNode(ptr -> val);
                newPtr = newPtr -> next;
            }
            ptr = ptr -> next; 
        }

        return head -> next;
    }
};