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

        if(!head) return head;

        ListNode* ptr = head;
        vector<int> v;

        while(ptr) {
            v.push_back(ptr -> val);
            ptr = ptr -> next;
        }

        ptr = head;

        for(int i = v.size() - 1; i > -1; i--) {
            ptr -> val = v[i];
            ptr = ptr -> next;
        }

        return head;
    }
};