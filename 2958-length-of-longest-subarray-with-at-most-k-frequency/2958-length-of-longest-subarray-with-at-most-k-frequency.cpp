class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int n = nums.size(), left = 0, result = 0;
        unordered_map<int, int> mp;

        for (int right = 0; right < n; right++) {
            mp[nums[right]]++;

            while (mp[nums[right]] > k)
                mp[nums[left++]]--;

            result = max(result, right - left + 1);
        }

        return result;
    }
};