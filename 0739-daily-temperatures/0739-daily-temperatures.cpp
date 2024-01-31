const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> result(n, 0);

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]) st.pop();
            if(!st.empty()) result[i] = st.top() - i;
            st.push(i);
        }

        return result;
    }
};