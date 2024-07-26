class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> board1(board.size(), vector<int>(board[0].size(), 0));

        for (int row1 = 0; row1 < board1.size(); row1++) 
            for (int col1 = 0; col1 < board1[0].size(); col1++)
                board1[row1][col1] = board[row1][col1];

        for (int row = 0; row < board.size(); row++)
            for (int col = 0; col < board[0].size(); col++) {
                
                int count = 0;

                if (row > 0 && board[row - 1][col] == 1)
                    count++;
                if (col > 0 && board[row][col - 1] == 1)
                    count++;

                if (row < board.size() - 1 && board[row + 1][col] == 1)
                    count++;
                if (col < board[0].size() - 1 && board[row][col + 1] == 1)
                    count++;

                if (row > 0 && col > 0 && board[row - 1][col - 1] == 1)
                    count++;
                if (row + 1 < board.size() && col + 1 < board[0].size() &&
                    board[row + 1][col + 1] == 1)
                    count++;

                if (row < board.size() - 1 && col > 0 &&
                    board[row + 1][col - 1] == 1)
                    count++;

                if (row > 0 && col + 1 < board[0].size() &&
                    board[row - 1][col + 1] == 1) 
                    count++;


                if(count == 0 || count == 1) board1[row][col] = 0;
                if(count == 3) board1[row][col] = 1;
                if(count > 3) board1[row][col] = 0;

            }
        
        board = board1;
    }
};