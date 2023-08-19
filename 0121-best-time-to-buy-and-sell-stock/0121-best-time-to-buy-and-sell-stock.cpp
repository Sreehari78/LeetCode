class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minimum = prices[0];
        int profit = 0;

        for (auto it: prices)
        {
            if(profit < (it - minimum)) profit = it - minimum;
            if(minimum > it) minimum = it;
        }

        return profit;   
    }
};
