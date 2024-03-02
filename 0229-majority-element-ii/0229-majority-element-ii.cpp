class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<int, int> mp;
        vector<int> result;
        int n = nums.size();

        for(int i = 0; i < n; i++) mp[nums[i]]++;

        for(auto it: mp) if(it.second > n / 3) result.push_back(it.first);
        return result;

    }
};