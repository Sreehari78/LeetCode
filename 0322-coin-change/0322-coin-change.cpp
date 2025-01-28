class Solution {
private:
    vector<vector<int>> dp;
    int helper(vector<int>& coins, int amount, int n) {
        if (n < 0|| amount <= 0)
            return (amount == 0) ? 0 : 1e9; 
        
        if(dp[n][amount] != -1)
            return dp[n][amount];

        int take = 1e9;
        if(coins[n] <= amount)
            take = 1 + helper(coins, amount - coins[n], n);
        int skip = helper(coins, amount, n - 1);

        return dp[n][amount] = min(take, skip);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        dp.resize(coins.size() + 1, vector<int>(amount + 1, -1));
        int res = helper(coins, amount, coins.size() - 1);

        if(res == 1e9)
            return -1;
     
        return res;
    }
};