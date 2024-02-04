int init = [] {
	cin.tie(nullptr)->sync_with_stdio(false);
    freopen("user.out", "w", stdout);

    for (string s; getline(cin, s); cout << '\n') {
        int solution = 0, minPrice = INT_MAX;
        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            int price = s[_i++] & 15;
            while ((s[_i] & 15) < 10) price = price * 10 + (s[_i++] & 15);
            minPrice = min(minPrice, price);
            solution = max(solution, price - minPrice);
        }
        cout << solution;
    }
    //exit(0);
    return 0;
}();
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