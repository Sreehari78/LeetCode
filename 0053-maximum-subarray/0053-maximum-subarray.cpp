class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(), INT_MIN);
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            dp[i] = max(nums[i], dp[i - 1] + nums[i]);
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (dp[i] > maxi)
                maxi = dp[i];
        }
        return maxi;
    }
};