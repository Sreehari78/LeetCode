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
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;

        ListNode* temp = new ListNode();
        ListNode* list3 = temp;

        while(list1 != nullptr && list2 != nullptr){
            if(list1 -> val == list2 -> val){
                temp -> next = new ListNode(list1 -> val);
                temp = temp -> next;
                temp -> next = new ListNode(list2 -> val);
                temp = temp -> next;
                list1 = list1 -> next;
                list2 = list2 -> next;
            }

            else if(list1 -> val > list2 -> val){
                temp -> next = new ListNode(list2 -> val);
                temp = temp -> next;
                list2 = list2 -> next;
            }

            else if(list1 -> val < list2 -> val){
                temp -> next = new ListNode(list1 -> val);
                temp = temp -> next;
                list1 = list1 -> next;
            }
        }

        while(list1 != nullptr){
            temp -> next = new ListNode(list1 -> val);
            temp = temp -> next;
            list1 = list1 -> next;
        }

        while(list2 != nullptr){
            temp -> next = new ListNode(list2 -> val);
            temp = temp -> next;
            list2 = list2 -> next;
        }
        
        list3 = list3 -> next;
        return list3;
    }
};
