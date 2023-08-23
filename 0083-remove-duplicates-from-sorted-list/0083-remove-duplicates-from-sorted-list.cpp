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

        if(head == nullptr) return nullptr;

        ListNode* ptr = head;
        ListNode* ptr1 = ptr->next;

        while(ptr1 != nullptr) {
            if(ptr->val == ptr1->val) {
                ptr->next = ptr1->next;
                delete ptr1;
                ptr1 = ptr->next;
                continue;
            }
            ptr = ptr1;
            ptr1 = ptr1->next;
        }

        return head;

    }
};