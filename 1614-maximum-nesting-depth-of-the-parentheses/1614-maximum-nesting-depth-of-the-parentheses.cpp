class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int res = 0;

        for(char it: s) if(it == '(') {
            st.push(it);
            res < st.size() ? res = st.size() : res = res; 
        }
        else if(it == ')') st.pop();

        return res;
    }
};