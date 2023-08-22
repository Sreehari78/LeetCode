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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* list = new ListNode();        
        ListNode* ptr = head -> next;
        ListNode* ptr1 = list;

        while(ptr->next != nullptr) {
            if(ptr->val != 0) ptr1->val += ptr->val;
            else {
                ptr1 -> next = new ListNode();
                ptr1 = ptr1 -> next;
            }

            ptr = ptr -> next;
        }

        return list;
    }
};