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
    ListNode* reverseKGroup(ListNode* head, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        ListNode* current = head;
        ListNode* left = nullptr;
        ListNode* prev = nullptr;

        bool isFirst = true;

        while (current) {
            int count = k, n = 0;
            ListNode* i = current;
            while(i && n++ < k) 
                i = i->next;
            
            if(n < k) {
                prev->next = current;
                return head;
            }

            while (current && count--) {
                ListNode* right = current->next;
                current->next = left;
                left = current;
                current = right;
            }
            
            if(isFirst) {
                head = left;
                isFirst = false;
            }
            ListNode* temp = left;
            while (temp->next)
                temp = temp->next;

            if(prev) prev->next = left;

            left = nullptr;
            prev = temp;
        }

        return head;
    }
};