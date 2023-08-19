class Solution {
public:
    int lengthOfLongestSubstring(string s) {       
        set<char> st;
        int start = 0, end = 0, max = 0;

        while(start < s.size()) {
            auto it = st.find(s[start]);
            if(it == st.end()) {
                if(max < (start - end + 1)) max = start - end + 1;
                st.insert(s[start++]);
            }
            else st.erase(s[end++]);
        }

       return max;
    }
};