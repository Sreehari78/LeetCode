int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
private:
    vector<string> results;

public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact = 1;
        k--;
        string ans;

        for(int i = 1; i < n; i++) {
            fact *= i;
            numbers.push_back(i);
        }

        numbers.push_back(n);

        while(true) {
            ans += to_string(numbers[k / fact]);
            numbers.erase(numbers.begin() + k / fact);
            if(numbers.size() == 0) break;
            k %= fact;
            fact /= numbers.size();
        }

        return ans;
    }
};
