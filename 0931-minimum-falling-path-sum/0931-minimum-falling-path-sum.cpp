int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
public:
    int dfs(vector<vector<int>>& matrix, int row, int col,
            vector<vector<int>>& mini) {
        if (row < 0 || row > matrix.size() - 1 || col < 0 ||
            col > matrix.size() - 1)
            return INT_MAX;
        if (mini[row][col] != INT_MAX)
            return mini[row][col];
        int result = min(dfs(matrix, row + 1, col - 1, mini),
                         min(dfs(matrix, row + 1, col, mini),
                             dfs(matrix, row + 1, col + 1, mini)));
        if (result == INT_MAX)
            result = 0;

        mini[row][col] = result + matrix[row][col];

        return mini[row][col];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int result = INT_MAX;
        vector<vector<int>> mini(matrix.size(), vector<int>(matrix.size(), INT_MAX));
        
        for (int i = 0; i < matrix.size(); i++)
            result = min(dfs(matrix, 0, i, mini), result);

        return result;
    }
};