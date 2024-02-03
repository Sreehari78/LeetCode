class Solution {
public:
    int memo(vector<vector<int>>& grid, int row, int colA, int colB, int r, int c, vector<vector<vector<int>>>& dp) {
        if(colA < 0 || colA >= c || colB < 0 || colB >= c)  return -1e8;
        if(row == r - 1) 
            if(colA == colB) return grid[row][colA];
            else return grid[row][colA] + grid[row][colB];
        
        if(dp[row][colA][colB] != -1) return dp[row][colA][colB];

        int maxi = -1e8;
        for(int i = -1; i <= +1; i++)
            for(int j = -1; j <= +1; j++) {
                int value = 0;
                if(colA == colB) value = grid[row][colA];
                else value = grid[row][colA] + grid[row][colB];
                value += memo(grid, row + 1, colA + i, colB + j, r, c,dp);
                maxi = max(value, maxi);
            }

        return dp[row][colA][colB] = maxi;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
        return memo(grid, 0, 0, m - 1, n, m, dp);
    }
};