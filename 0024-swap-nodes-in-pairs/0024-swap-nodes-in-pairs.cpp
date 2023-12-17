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
    ListNode* swapPairs(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if(!head || !head -> next) return head;

        ListNode* temp = new ListNode();
        ListNode* prev = temp;
        ListNode* curr = head;


        while(curr && curr->next) {
            prev->next = curr->next;
            curr->next = prev->next->next;
            prev->next->next = curr;
            
            prev = curr;
            curr = curr->next;
        }

        return temp -> next;
    }
};