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
    ListNode* sortList(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if (!head || !head->next)
            return head;

        priority_queue<ListNode*, vector<ListNode*>,
                       function<bool(ListNode*, ListNode*)>>
            pq([](ListNode* a, ListNode* b) { return a->val > b->val; });
        ListNode* ptr = head;

        while (ptr) {
            pq.push(ptr);
            ptr = ptr->next;
        }

        head = pq.top();
        pq.pop();
        ptr = head;

        while (!pq.empty()) {
            ptr->next = pq.top();
            pq.pop();
            ptr = ptr->next;
        }

        ptr->next = nullptr;
        return head;
    }
};