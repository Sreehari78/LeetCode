class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        vector<string> res;

        for (string word : words)
            mp[word]++;

        vector<pair<string, int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(),
             [](pair<string, int>& a, pair<string, int>& b) {
                 if (a.second == b.second)
                     return a.first < b.first;
                 return a.second > b.second;
             });

        for (int i = 0; i < k; i++)
            res.push_back(v[i].first);
        return res;
    }
};