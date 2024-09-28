class Solution {
public:
    bool isValidRow(vector<vector<char>>& board, int row, int col) {
        char val = board[row][col];

        for (int i = 0; i < 9; i++)
            if (i != row && board[i][col] == val)
                return false;

        return true;
    }

    bool isValidCol(vector<vector<char>>& board, int row, int col) {
        char val = board[row][col];

        for (int i = 0; i < 9; i++)
            if (i != col && board[row][i] == val)
                return false;

        return true;
    }

    bool isValidMat(vector<vector<char>>& board, int row, int col) {
        char val = board[row][col];
        int matRow = row / 3, matCol = col / 3;
        int matRowStart = matRow * 3, matColStart = matCol * 3;

        for (int i = matRowStart; i < matRowStart + 3; i++)
            for (int j = matColStart; j < matColStart + 3; j++)
                if ((i != row && j != col) && board[i][j] == val)
                    return false;

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++)
            for (int col = 0; col < 9; col++) {
                bool res = true;
                if (board[row][col] != '.')
                    res = isValidRow(board, row, col) &&
                          isValidCol(board, row, col) &&
                          isValidMat(board, row, col);
                if (!res)
                    return false;
            }

        return true;
    }
};