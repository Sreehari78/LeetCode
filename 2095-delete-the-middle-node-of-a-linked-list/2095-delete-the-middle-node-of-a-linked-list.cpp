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
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        ListNode* ptr = head;
        int count = 0;

        for(count = 0; ptr; count++) ptr = ptr -> next;
        if(count == 1) return nullptr;        
        ptr  = head;

        for(int i = 0; i < ceil(count / 2) - 1; i++) ptr = ptr -> next;
        ptr->next = ptr->next->next;

        return head;
    }
};
