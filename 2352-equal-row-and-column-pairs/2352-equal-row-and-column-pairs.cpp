class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        map<vector<int>,int> mp;
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