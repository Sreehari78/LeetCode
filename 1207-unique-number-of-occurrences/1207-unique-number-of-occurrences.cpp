int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> s;

        for(int it: arr) mp[it]++;

        for(auto& [key, value]: mp) 
        if(s.count(value) >= 1) return false;
        else s.insert(value);

        return true;
    }
};