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
    ListNode* rotateRight(ListNode* head, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(k == 0 || !head || !(head->next)) return head;

        ListNode* ptr = head;
        int n = 1;

        while(ptr->next) {
            ptr = ptr->next;
            n++;
        }

        k = n - (k % n);
        if(k == 0) return head;
        ptr->next = head;

        for(int i = 0; i < k; i++) ptr = ptr->next;

        head = ptr->next;
        ptr->next = nullptr;

        return head;
    }
};