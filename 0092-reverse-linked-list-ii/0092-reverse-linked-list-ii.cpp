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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(left == right) return head;

        ListNode* ptr1 = head;
        ListNode* ptr2 = ptr1;
        vector<int> v;

        for(int i = 1; i <= right; i++) {
            if(i < left) ptr1 = ptr1 -> next;
            else v.push_back(ptr2 -> val);
            ptr2 = ptr2 -> next;
        }

        for(int i = v.size() - 1; i > - 1; i--) {
            ptr1 -> val = v[i];
            ptr1 = ptr1 -> next;
        }

        return head;
    }
};
