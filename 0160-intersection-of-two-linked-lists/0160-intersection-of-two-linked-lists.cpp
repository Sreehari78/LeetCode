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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        unordered_map<ListNode*, int> mp;
        while(headA) {
            mp[headA] = 1;
            headA = headA -> next;
        }

        while(headB) {
            if(mp[headB] == 1) return headB;
            headB = headB -> next;
        }

        return nullptr;
    }
};