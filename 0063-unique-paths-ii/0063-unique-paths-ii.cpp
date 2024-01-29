class Solution {
public:
    int memo(vector<vector<int>>& obstacleGrid, int row, int col, vector<vector<int>>& dp) {
        if(row == 0 && col == 0 && obstacleGrid[0][0] == 0) return 1;
        if(row < 0 || col < 0 || (row == 0 && col == 0 && obstacleGrid[0][0] == 1)) return 0;
        if(dp[row][col] != -1) return dp[row][col];

        int result = 0;
        if(row - 1 >= 0 && obstacleGrid[row - 1][col] != 1 ) result += memo(obstacleGrid, row - 1, col, dp);
        if(col - 1 >= 0 && obstacleGrid[row][col - 1] != 1 ) result += memo(obstacleGrid, row, col - 1, dp);
        return dp[row][col] = result;

    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size() ;
        if(obstacleGrid[n - 1][m - 1] == 1) return 0;

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return memo(obstacleGrid, n - 1, m - 1, dp);
    }
};