class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        stack<int> st;

        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i] == "+") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                b += a;
                st.push(b);
            }
            else if(tokens[i] == "-") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                b -= a;
                st.push(b);
            }
            else if(tokens[i] == "*") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                b *= a;
                st.push(b);
            }
            else if(tokens[i] == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                b /= a;
                st.push(b);
            }
            else st.push(stoi(tokens[i]));
        }

        return st.top();
    }
};