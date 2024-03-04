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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        ListNode* ptr = head;
        ListNode* ptr1 = ptr -> next;
        
        while(ptr1) {
            ptr -> next = new ListNode(__gcd(ptr -> val, ptr1 -> val), ptr1);
            ptr = ptr1;
            ptr1 = ptr1 -> next;
        }

        return head;
    }
};