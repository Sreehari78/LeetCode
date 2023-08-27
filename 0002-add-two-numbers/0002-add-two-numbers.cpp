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

    int len(ListNode* head){
        if(head==NULL) return 0;
        int count = 0;
        while(head){
            count++;
            head = head->next;
        }
        return count;
    }

    ListNode* add(ListNode* l1, ListNode* l2) {

        ListNode* head = new ListNode(-1);
        ListNode* ptr = head;

        while(l1) {

            int n = l1->val;
            if(l2) {
                n += l2->val;
                l2 = l2->next;
            }

            if(n > 9) {
                if(l1->next) l1->next->val++;
                else l1->next = new ListNode(1);
                n %= 10;
            }

            l1 = l1->next;
            ptr->next = new ListNode(n);
            ptr = ptr->next;
        }

        head = head->next;
        return head;

    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int n1 = len(l1), n2 = len(l2);

        if(n1 > n2) return add(l1, l2);
        return add(l2, l1);
    }
};