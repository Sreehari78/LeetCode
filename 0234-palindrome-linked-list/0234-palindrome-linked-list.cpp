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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
while (temp != NULL) {
    if (!st.empty() && st.top() == temp->val) {
        st.pop(); // Remove the top element from the stack
        temp = temp->next;
    } else {
        return false; // If elements don't match, it's not a palindrome
    }
}
// If the loop completes without returning false, it's a palindrome
return true;

        
    }
};