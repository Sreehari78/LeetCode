// int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
public:
    void reccursiveMethod(int n, int k, string &ans, int fact, vector<int> &numbers) {
        ans += to_string(numbers[k / fact]);
        numbers.erase(numbers.begin() + k / fact);
        if(numbers.size() == 0) return;
        reccursiveMethod(n, k % fact, ans, fact / numbers.size(), numbers);
    }

    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact = 1;
        string ans = "";

        for(int i = 1; i < n; i++) {
            fact *= i;
            numbers.push_back(i);
        }

        numbers.push_back(n);
        reccursiveMethod(n, k - 1, ans, fact, numbers);

        // k--;
        // while(true) {
        //     ans += to_string(numbers[k / fact]);
        //     numbers.erase(numbers.begin() + k / fact);
        //     if(numbers.size() == 0) break;
        //     k %= fact;
        //     fact /= numbers.size();
        // }

        return ans;
    }
};
