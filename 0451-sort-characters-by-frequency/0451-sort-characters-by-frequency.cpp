class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        vector<pair<char, int>> v;

        for(char it: s) mp[it]++;
        for(auto it: mp) v.push_back(it);

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        s = "";
        for(auto it: v) while(it.second--) s += it.first;
        return s;
    }
};