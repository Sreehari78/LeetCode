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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int n = l1->val + l2->val;
        if(n > 9) {
            if(l1->next != nullptr) l1->next->val++;
            else if(l2->next != nullptr) l2->next->val++;
            else l1->next = new ListNode(1);
            n %= 10;
        }

        l1 = l1->next;
        l2 = l2->next;
        ListNode* head = new ListNode(n);
        ListNode* ptr = head;
        
        while(l1 != nullptr && l2 != nullptr) {
            n = l1->val + l2->val;

            if(n > 9) {
                if(l1->next != nullptr) l1->next->val++;
                else if(l2->next != nullptr) l2->next->val++;
                else l1->next = new ListNode(1);
                n %= 10;
            }
            ptr->next = new ListNode(n);
            ptr = ptr->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != nullptr) {
             if(l1->val > 9) {
                if(l1->next != nullptr) l1->next->val++;
                else l1->next = new ListNode(1);
                l1->val %= 10;
            }
            ptr->next = new ListNode(l1->val);
            ptr = ptr->next;
            l1 = l1->next;
        }

        while(l2 != nullptr) {
            if(l2->val > 9) {
                if(l2->next != nullptr) l2->next->val++;
                else l2->next = new ListNode(1);
                l2->val %= 10;
            }
            ptr->next = new ListNode(l2->val);
            ptr = ptr->next;
            l2 = l2->next;
        }

        return head;
    }
};