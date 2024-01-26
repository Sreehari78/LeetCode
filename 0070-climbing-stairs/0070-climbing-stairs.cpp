class Solution {
public:
    int climbStairs(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int dp[n + 1];
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        dp[0] = 1, dp[1] = 1;
        for(int i = 2; i <= n; i++) dp[i] = dp[i - 1] + dp[i - 2];

        return dp[n];
    }
};