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