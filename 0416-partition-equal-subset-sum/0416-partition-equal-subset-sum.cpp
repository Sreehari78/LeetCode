class Solution {
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0, n = nums.size();
        for(int it: nums) sum += it;
        if(sum % 2 != 0 || n == 1 || (n == 2 && nums[0] != nums[1])) return false;
        int k = sum / 2;

        vector<vector<bool>> dp(n, vector<bool>(k + 1, 0));
        for(int i = 0; i < n; i++) dp[i][0] = true;
        dp[0][nums[0]] = true;

        for(int index = 1; index < n; index++)
            for(int target = 1; target <= k; target++) {
                bool notTake = dp[index - 1][target];
                bool take = false;
                if (nums[index] <= target) take = dp[index - 1][target - nums[index]];
                dp[index][target] = (take | notTake);
            }

        return dp[n - 1][k];
    }
};