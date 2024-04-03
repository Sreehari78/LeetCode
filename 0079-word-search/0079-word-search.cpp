class Solution {
public:
    bool backtrack(vector<vector<char>>& board, const string& word, int index, int row, int col) {
        if (index == word.length())
            return true;

        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || board[row][col] != word[index])
            return false;

        char temp = board[row][col];
        board[row][col] = '\0';

        bool found = backtrack(board, word, index + 1, row + 1, col) ||
                     backtrack(board, word, index + 1, row - 1, col) ||
                     backtrack(board, word, index + 1, row, col + 1) ||
                     backtrack(board, word, index + 1, row, col - 1);

        board[row][col] = temp;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty() || word.empty())
            return false;

        int m = board.size(), n = board[0].size();
        bool flag = false;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j)
                if (board[i][j] == word[0])
                    if (backtrack(board, word, 0, i, j)) {
                        flag = true;
                        break;
                    }

            if (flag)
                break;
        }

        return flag;
    }
};