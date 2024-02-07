class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string str = "";

        for(char c: s) mp[c]++;

        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second;
        });

        for(auto it: v)
            while(it.second--)
                str += it.first;

        return str;
    }
};