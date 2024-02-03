class Solution {
public:
    bool memo(vector<int> &nums, int target, int index, vector<vector<int>> &dp) {
        if (target == 0) return true;
        if (index == 0) return nums[0] == target;
        if (dp[index][target] != -1) return dp[index][target];

        bool notTake = memo(nums, target, index - 1, dp);
        bool take = false;
        if (nums[index] <= target) take = memo(nums, target - nums[index], index - 1, dp);

        return dp[index][target] = (take | notTake);
    }

    bool canPartition(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int sum = 0, n = nums.size();
        for(int it: nums) sum += it;
        if(sum% 2 != 0) return false;
        int k = sum / 2;
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));

        return memo(nums, k, n - 1, dp);
    }
};