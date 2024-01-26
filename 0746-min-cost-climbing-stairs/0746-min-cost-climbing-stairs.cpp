class Solution {
public:
    int dpFunction(vector<int>& cost, int index, vector<int>& dp) {
        if(index <= 1) return cost[index];
        if(dp[index] != -1) return dp[index];

        int left = dpFunction(cost, index - 1, dp);
        int right = dpFunction(cost, index - 2, dp);
        return dp[index] = cost[index] + min(left, right);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() + 1, -1);
        return min(dpFunction(cost, cost.size() - 1, dp), dpFunction(cost, cost.size() - 2, dp));
    }
};