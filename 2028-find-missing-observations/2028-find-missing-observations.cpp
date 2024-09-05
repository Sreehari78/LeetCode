class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        long sum = 0, x = 0, m = rolls.size(), val = 0, rem = 0;

        sum = accumulate(rolls.begin(), rolls.end(), 0);
        
        x = mean * (n + m) - sum;
        val = x / n;

        if(val > 6 || val < 1)
            return {};

        vector<int> res(n, val);

        rem = x - val * n;

        if(val == 6 && rem != 0)
            return {};

        for(int i = 0; i < rem; i++)
            res[i]++;

        return res;

    }
};