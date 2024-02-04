class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(char it: s) 
            if(it == '*') st.pop();
            else st.push(it);
        
        string str = "";
        while(!st.empty()) {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;

    }

};