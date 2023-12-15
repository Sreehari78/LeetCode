class Solution {
public:
    vector<vector<string>> result;

    bool isSafe(int row, int col, int n, vector<string> &board) {

        int duprow = row, dupcol = col;

        //UPPER DIAGONAL
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        row = duprow;
        col = dupcol;

        while(row < n && col >=0) {
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }

        
        row = duprow;
        col = dupcol;

        //HORIZOTAL
        while(col >= 0)
            if(board[row][col] == 'Q') return false;
            else col--;
        
        return true;
    }

    void reccursiveMethod(int col, int n, vector<string> &board) {
        if(col == n) {
            result.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++)
        if(isSafe(row, col, n, board)) {
            board[row][col] = 'Q';
            reccursiveMethod(col + 1, n, board);
            board[row][col] = '.';
        }
    }

    int totalNQueens(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<string> board(n);
        string s (n, '.');

        for(int i = 0; i < n; i++) board[i] = s;

        reccursiveMethod(0, n, board);
        return result.size();
    }
};