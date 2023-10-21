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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        ListNode* ptr = head;

        for(int i = 0; i < n; i++) ptr = ptr -> next;

        ListNode* ptr1 = head;
        ListNode* prev = nullptr;

        while(ptr) {
            prev = ptr1;
            ptr = ptr -> next;
            ptr1 = ptr1 -> next;
        }
        if(prev && ptr1)
            prev -> next = ptr1 -> next;
        else if(!ptr1->next)
            return NULL;
        else if(!prev)
            return head->next;

        return head;
    }
};