class Solution {
public:
    int maxProfit(vector<int>& prices) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int mini = prices[0], profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            profit = max(profit, prices[i] - mini);
            mini = min(mini, prices[i]);
        }

        return profit;
    }
};