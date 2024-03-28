class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size(), left = 0, result = 0;
        unordered_map <int, int> mp;

        for(int right = 0; right < n; right++) {
            int x = nums[right];
            mp[x]++;

            while(mp[x] > k) {
                mp[nums[left]]--;
                left++;
            }

            result = max(result, right - left + 1);
        }

        return result;
    }
};