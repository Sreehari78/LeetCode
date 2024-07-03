class Solution {
public:
    bool isAnagram(string s, string t) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<char, int> mp;

        for (char it : s)
            mp[it]++;

        for (char it : t)
            if (!mp[it])
                return false;
            else
                mp[it]--;

        for(auto it: mp) if(it.second) return false;
        return true;
    }
};