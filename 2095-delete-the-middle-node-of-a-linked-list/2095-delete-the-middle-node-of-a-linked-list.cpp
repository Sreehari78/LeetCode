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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head -> next) return nullptr;

        ListNode* hare = head;
        ListNode* tortise = head;

        while(hare && hare -> next) {
            hare = hare -> next -> next;
            tortise = tortise -> next;
        }

        hare = head;
        while(hare -> next != tortise) hare = hare -> next;

        hare -> next = tortise -> next;
        tortise -> next = nullptr;

        return head;
    }
};