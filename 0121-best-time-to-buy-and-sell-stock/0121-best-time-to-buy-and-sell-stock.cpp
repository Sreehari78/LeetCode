class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minimum = prices[0];
        int profit = 0;
        for (auto it: prices)
        {
            profit=max(profit, it - minimum);
            minimum=min(minimum, it);
        }
        return profit;   
    }
};

