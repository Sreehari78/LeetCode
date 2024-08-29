class Solution {
private:
    vector<vector<int>> dp;

    int helper(string& s, int i, int j) {
        if(i > j)
            return 0;

        if(i == j){
            dp[i][j] = 1;
            return dp[i][j];
        }

        if(dp[i][j] != -1)
            return dp[i][j];

        if(s[i] == s[j])
            dp[i][j] = 2 + helper(s, i + 1, j - 1);
        else
            dp[i][j] = max(helper(s, i + 1, j), helper(s, i, j - 1));

        return  dp[i][j];
    }

public:
    int longestPalindromeSubseq(string s) {
        dp.resize(s.length() + 1, vector<int>(s.length() + 1, -1));
        // string t = s;
        // reverse(t.begin(), t.end());

        // for(int i = 1; i < s.length() + 1; i++)
        //     for(int j = 1; j < s.length() + 1; j++) {
        //         if(i == j) {
        //             dp[i][j] = 1;
        //             continue;
        //         }
        //         if(s[i - 1] == t[j - 1])
        //             dp[i][j] = 1 + dp[i][j - 1];
        //         else
        //             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
        //     }

        return helper(s, 0, s.length() - 1);
    }
};