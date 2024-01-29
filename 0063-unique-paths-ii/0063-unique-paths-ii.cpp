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

        vector<int> prev(m, 0);
        for(int  i = 0; i < n; i++) {
            vector<int> curr(m, 0);

            for(int  j = 0; j < m; j++)
                if(i == 0 && j == 0 && obstacleGrid[0][0] == 0) curr[0] = 1;
                else {
                    int result = 0;
                    if(i - 1 >= 0 && obstacleGrid[i - 1][j] != 1) result += prev[j];
                    if(j - 1 >= 0 && obstacleGrid[i][j - 1] != 1) result += curr[j - 1];
                    curr[j] = result;
                }
                prev = curr;
        }

        return prev[m - 1];
    }
};