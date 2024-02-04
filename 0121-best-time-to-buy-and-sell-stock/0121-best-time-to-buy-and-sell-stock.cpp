class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1, n = prices.size(), result = 0;

        while(right < n) {
            int profit = prices[right] - prices[left];
            result = max(result, profit);

            while(prices[left] > prices[right]) left++;
            right++;
        }

        return result;
    }
};