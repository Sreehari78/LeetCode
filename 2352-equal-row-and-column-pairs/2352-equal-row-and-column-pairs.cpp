struct VectorHasher {
    int operator()(const std::vector<int> &V) const {
        int hash = V.size();
        for(auto &i : V) {
        hash ^= i + 0x9e3779b9 + (hash << 6) + (hash >> 2);
        }
        return hash;
    }
};

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")

static const int FAST__ = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<vector<int>,int, VectorHasher> mp;
        int result = 0;

        for(int i = 0; i < grid.size(); i++) mp[grid[i]]++;

        for(int i = 0; i < grid.size(); i++) {
            vector<int> temp;
            for(int j = 0; j < grid.size(); j++)
                temp.push_back(grid[j][i]);

            result += mp[temp];
        }

        return result;
        
    }
};