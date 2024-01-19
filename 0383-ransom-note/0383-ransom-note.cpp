class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        unordered_map<char, int> mp;
        for(int i = 0; i < magazine.size(); i++) mp[magazine[i]]++;
        for(int i = 0; i < ransomNote.size(); i++) if(!mp[ransomNote[i]]--) return false; 
        return true;
    }
};