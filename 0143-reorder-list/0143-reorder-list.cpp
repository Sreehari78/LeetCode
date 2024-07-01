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
    void reorderList(ListNode* head) {
        if (!head || !head -> next) return;
        ListNode* hare = head;
        ListNode* tortise = head;
        ListNode* left = nullptr;

        while (hare && hare->next) {
            hare = hare->next->next;
            tortise = tortise->next;
        }
        
        while (tortise) {
            ListNode* right = tortise->next;
            tortise->next = left;
            left = tortise;
            tortise = right;
        }

        ListNode* first = head;
        ListNode* second = left;
        
        while (second -> next) {
            ListNode* temp1 = first -> next;
            ListNode* temp2 = second -> next;

            first -> next = second;
            second -> next = temp1;

            first = temp1;
            second = temp2;            
        }

        return;
    }
};