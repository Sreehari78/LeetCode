int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string str = "";

        for(char c: s) mp[c]++;

        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        for(auto it: v)
            while(it.second--)
                str += it.first;

        return str;
    }
};