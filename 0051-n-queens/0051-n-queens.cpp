class Solution {
public:
    vector<vector<string>> result;

    bool isSafe(int row, int col, vector<string> &board, int n){
        int duprow = row, dupcol = col;

        // upper diagonal
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            col--;
            row--;
        }
        
        row = duprow;
        col = dupcol;

        // lower diagonal
        while(row < n && col >= 0){
            if(board[row][col] == 'Q') return false;
            col--;
            row++;
        }

        row = duprow;
        col = dupcol;

        // horizontal
        while(col >= 0)
            if(board[row][col] == 'Q') return false;
            else col--;

        return true;
    }

    void recursiveMethod(int col, int n, vector<string> &board){
        if(col == n) {
            result.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++) {
            if(isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                recursiveMethod(col + 1, n, board);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<string> board(n);
        string s (n, '.');

        for(int i = 0; i < n; i++) board[i] = s;

        recursiveMethod(0, n, board);
        return result;
    }
};