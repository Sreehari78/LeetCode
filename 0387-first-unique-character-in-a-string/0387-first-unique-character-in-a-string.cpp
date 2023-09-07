class Solution {
public:
    int firstUniqChar(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    
        unordered_map<char, int> mp;

        for(int i = 0; i < s.length(); i++) mp[s[i]]++;

        for(int i = 0; i < s.length(); i++) {
            if(mp[s[i]] == 1) return i;
        }

        return -1;
    }
};