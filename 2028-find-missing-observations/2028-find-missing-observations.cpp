class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int sum = 0, x = 0, val = 0, rem = 0;

        sum = accumulate(rolls.begin(), rolls.end(), 0);
        x = mean * (n + rolls.size()) - sum;
        val = x / n;

        if (val > 6 || val < 1)
            return {};

        vector<int> res(n, val);
        rem = x - val * n;

        if (val == 6 && rem != 0)
            return {};

        for (int i = 0; i < rem; i++)
            res[i]++;

        return res;
    }
};