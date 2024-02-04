int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.length() > s.length()) return {};
        int left = 0, right = p.length() - 1, n = s.length();
        unordered_map<char, int> mp1, mp2;
        vector<int> result;

        for(char i = 'a'; i <= 'z'; i++) {
            mp1[i] = 0;
            mp2[i] = 0;
        }

        for(char it: p) mp1[it]++;
        for(int i = left; i <= right; i++) mp2[s[i]]++;

        while(right < n) {
            if(mp1 == mp2) result.push_back(left);
            mp2[s[left++]]--;
            mp2[s[++right]]++;
        }

        return result;
    }
};