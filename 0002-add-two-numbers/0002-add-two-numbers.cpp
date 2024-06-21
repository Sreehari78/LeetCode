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
        ListNode* head = new ListNode(0);
        ListNode* ptr = head;

        while (l1 && l2) {
            int sum = l1->val + l2->val, carry = 0;
            (sum > 9) ? carry = 1 : carry = 0;

            sum %= 10;
            ListNode* temp = new ListNode(sum);
            ptr->next = temp;

            if (l1->next && carry)
                l1->next->val++;
            else if (l2->next && carry)
                l2->next->val++;
            else if (carry) {
                ptr->next = new ListNode(sum);
                ptr->next->next = new ListNode(1);
            }

            l1 = l1->next;
            l2 = l2->next;
            ptr = ptr->next;
        }

        while (l1) {
            int sum = l1->val, carry = 0;
            (l1->val > 9) ? carry = 1 : carry = 0;

            sum %= 10;
            ListNode* temp = new ListNode(sum);
            ptr->next = temp;

            if (l1->next && carry)
                l1->next->val++;
            else if (carry) {
                ptr->next = new ListNode(sum);
                ptr->next->next = new ListNode(1);
            }

            l1 = l1->next;
            ptr = ptr->next;
        }

        while (l2) {
            int sum = l2->val, carry = 0;
            (l2->val > 9) ? carry = 1 : carry = 0;

            sum %= 10;
            ListNode* temp = new ListNode(sum);
            ptr->next = temp;

            if (l2->next && carry)
                l2->next->val++;
            else if (carry) {
                ptr->next = new ListNode(sum);
                ptr->next->next = new ListNode(1);
            }

            l2 = l2->next;
            ptr = ptr->next;
        }

        return head->next;
    }
};