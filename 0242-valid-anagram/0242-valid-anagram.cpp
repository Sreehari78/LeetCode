class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    bool isAnagram(string s, string t) {
        unordered_map <char, int> mp;

        for(auto it: s) mp[it]++;
        for(auto it: t) mp[it]--;
        for(auto it: mp) if(it.second != 0) return false;
        return true;
    }
};