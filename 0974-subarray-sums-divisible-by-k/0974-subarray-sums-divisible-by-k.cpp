class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        unordered_map<int, int> mp;
        int sum = 0, res = 0;

        mp[sum] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int mod = sum % k;
            if (mod < 0)
                mod += k;
            if (mp.find(mod) != mp.end())
                res += mp[mod];
            mp[mod]++;
        }

        return res;
    }
};