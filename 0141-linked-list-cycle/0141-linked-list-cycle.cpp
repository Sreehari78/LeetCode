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
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;

        while(ptr2) {
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next;
            if(!ptr2 || !ptr2 -> next) break;
            ptr2 = ptr2 -> next;

            if(ptr1 == ptr2) return true;
        }

        return false;
    }
};