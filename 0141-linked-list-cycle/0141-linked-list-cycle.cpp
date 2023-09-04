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
    bool hasCycle(ListNode *head) {
        
        if(head == nullptr) return false;

        ListNode* ptr1 = head;
        ListNode* ptr2 = head;

        ptr2 = ptr2->next;

        while(ptr1->next != nullptr && ptr2->next != nullptr) {
            if(ptr1 == ptr2) return true;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(ptr2->next !=nullptr) ptr2= ptr2->next;
            else return false;
        }
        return false;
    }
};