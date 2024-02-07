class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        std::unordered_map<string, vector<string>> mapping;
        for (const auto& str : strs) {
            string new_str = str;
            sort(new_str.begin(), new_str.end());
            mapping[new_str].push_back(str);
        }
        vector<vector<string>> ans;
        for (const auto& entry : mapping) {
            ans.push_back(entry.second);
        }
        return ans;
    }
};