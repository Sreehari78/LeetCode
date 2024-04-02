class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> mp1, mp2;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (!mp1[s[i]])
                mp1[s[i]] = t[i];
            if (!mp2[t[i]])
                mp2[t[i]] = s[i];

            if (mp1[s[i]] != t[i] || mp2[t[i]] != s[i])
                return false;
        }

        return true;
    }
};