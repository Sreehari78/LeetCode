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
    ListNode* reverseList(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if(!head || ! head -> next) return head;

        ListNode* left = nullptr;
        ListNode* current = head;
        ListNode* right = current -> next;

        while(right) {
            current -> next = left;
            left = current;
            current = right;
            right = right -> next;
        }
        current -> next = left;
        return current;
    }
};