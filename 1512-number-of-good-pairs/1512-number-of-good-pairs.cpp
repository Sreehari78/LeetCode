class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int ans = 0;
        unordered_map<int, int> mp;

        for (int it: nums)
            ans += mp[it]++;

        return ans;
    }
};