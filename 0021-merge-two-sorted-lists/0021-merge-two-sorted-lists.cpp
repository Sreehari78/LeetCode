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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        ListNode* head = new ListNode();
        ListNode* ptr = head;

        while(list1 && list2) {
            if(list1 -> val <= list2 -> val) {
                ptr -> next = new ListNode(list1 -> val);
                ptr = ptr -> next;
                list1 = list1 -> next;
            }
            else {
                ptr -> next = new ListNode(list2 -> val);
                ptr = ptr -> next;
                list2 = list2 -> next;
            }
        }

        while(list1) {
            ptr -> next = new ListNode(list1 -> val);
            ptr = ptr -> next;
            list1 = list1 -> next;
        }
        
        while(list2) {
            ptr -> next = new ListNode(list2 -> val);
            ptr = ptr -> next;
            list2 = list2 -> next;
        }

        return head -> next;
    }
};