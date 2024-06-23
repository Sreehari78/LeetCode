class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> st;
        st.push({temperatures[0], 0});

        for (int i = 1; i < temperatures.size(); i++) {
            while (st.size() > 0 && (st.top().first < temperatures[i])) {
                res[st.top().second] = i - st.top().second;
                st.pop();
            }
            st.push({temperatures[i], i});
        }

        return res;
    }
};