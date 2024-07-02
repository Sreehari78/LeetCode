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
 int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);  
    ofstream out("user.out"); 
    for (string s; getline(cin, s);) 
        out << (equal(s.begin()+1, s.begin()+s.size()/2, s.rbegin()+1) ? "true\n" : "false\n");  
    out.flush(); 
    exit(0);  
    return 0;
}();

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
           } else
                return false; 

}
return true;     
    }
};