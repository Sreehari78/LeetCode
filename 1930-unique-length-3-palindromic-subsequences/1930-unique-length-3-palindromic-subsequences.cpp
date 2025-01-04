class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<pair<int, int>> v(26, {-1, -1});
        int res = 0;

        for(int i = 0; i < s.length(); i++) {
            if(v[s[i] - 97].first == -1)
                v[s[i] - 97].first = i;
            
            if(v[s[i] - 97].second < i)
                v[s[i] - 97].second = i;
        }

        for(int i = 0; i < 26; i++) {
            unordered_set<char> st;
            
            if(v[i].first == -1)
                continue;
    
            for(int j = v[i].first + 1; j < v[i].second; j++)
                st.insert(s[j]);
            
            res += st.size();
        }

        return res;

    }
};