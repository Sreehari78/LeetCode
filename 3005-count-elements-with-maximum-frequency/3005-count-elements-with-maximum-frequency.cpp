class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<int, int> mp;
        int maxi = 0, res = 0;

        for(int it: nums) mp[it]++;
        for(auto it: mp) maxi = max(maxi, it.second);
        for(auto it: mp) if(it.second == maxi) res += maxi;
        return res;

    }
};