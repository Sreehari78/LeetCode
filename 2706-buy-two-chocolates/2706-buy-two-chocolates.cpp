class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int result = INT_MAX, n = prices.size();

        for(int i = 0; i < n - 1; i++) result = min(result, prices[i] + prices[i + 1]);
        
        if(result <= money) return money - result;
        return money;
    }
};