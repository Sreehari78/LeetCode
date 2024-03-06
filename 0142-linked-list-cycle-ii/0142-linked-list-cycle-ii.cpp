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
    ListNode *detectCycle(ListNode *head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        ListNode* hare = head;
        ListNode* tortise = head;

        while(hare) {
            tortise = tortise -> next;
            hare = hare -> next;

            if(!hare || !hare -> next) return nullptr;

            hare = hare -> next;
            if(hare == tortise) break;
        }

        ListNode* ptr = head;
        
        while(ptr != tortise) {
            ptr = ptr -> next;
            tortise = tortise -> next;
        }

        return ptr;

        return nullptr;
    }
};