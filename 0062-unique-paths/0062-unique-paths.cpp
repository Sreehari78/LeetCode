class Solution {
public:
    int memo(int row, int col, vector<vector<int>>& dp) {
        if(row == 0 && col == 0) return 1;
        if(row < 0 || col < 0) return 0;
        if(dp[row][col] != -1) return dp[row][col];

        int up = memo(row - 1, col, dp);
        int left = memo(row, col - 1, dp);
        return dp[row][col] = up + left;
    }

    int uniquePaths(int m, int n) {
        vector<int> prev(n, 0);

        for(int i = 0; i < m; i++) {
            vector<int> curr(n, 0);
            for(int j = 0; j < n; j++)
                if(i == 0 && j == 0) curr[j] = 1;
                else {
                    int result = 0;
                    if(i > 0) result += prev[j];
                    if(j > 0)  result += curr[j - 1];
                    curr[j] = result;
                }
                prev = curr;
        }

    return prev[n - 1];
    }
};