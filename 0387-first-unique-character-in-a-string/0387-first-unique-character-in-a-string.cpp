class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    
        int freq[26] = {0};
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            freq[ch - 'a']++;
        }

        for(int i = 0; i < s.size(); i++) if(freq[s[i]-'a'] == 1) return i;

        return -1;
    }
};