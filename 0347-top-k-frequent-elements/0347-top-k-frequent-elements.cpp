class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<int, int> mp;
        vector<pair<int, int>> v;
        vector<int> res;

        for (int it : nums)
            mp[it]++;
            
        for (auto it : mp)
            v.push_back({it.first, it.second});

        sort(v.begin(), v.end(), [](auto& left, auto& right) {
            return left.second > right.second;
        });

        for(int i = 0; i < k; i++) res.push_back(v[i].first);

        return res;
    }
};