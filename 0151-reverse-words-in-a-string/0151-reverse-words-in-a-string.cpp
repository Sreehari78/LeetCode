class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string res = "", word = "";

        for (char it : s) 

            if (isalpha(it) || isdigit(it))
                word += it;
            else if (it == ' ' && word.length()) {
                if (word != "")
                    st.push(word);
                word = "";
            }

        if (word != "")
            st.push(word);

        while (st.size()) {
            res += st.top();
            st.pop();
            if (st.size())
                res += ' ';
        }

        return res;
    }
};