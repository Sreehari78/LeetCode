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
    ListNode* oddEvenList(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if (!head || !head->next)
            return head;

        ListNode* ptr1 = head;
        ListNode* ptr2 = head->next;
        ListNode* ptr3 = head->next;

        while (ptr1 && ptr2 && ptr1->next && ptr2->next) {
            ptr1->next = ptr2->next;
            ptr1 = ptr1->next;
            ptr2->next = ptr1->next;
            ptr2 = ptr2->next;
        }

        ptr1->next = ptr3;

        return head;
    }
};