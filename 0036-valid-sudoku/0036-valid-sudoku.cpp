class Solution {
public:      
    bool isValidSudoku(vector<vector<char>>& board) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);

        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++) {
                char cell = board[i][j];
                if(cell == '.') continue;

                if(rows[i].count(cell)) return false;
                rows[i].insert(cell);

                if(cols[j].count(cell)) return false;
                cols[j].insert(cell);

                int boxIndex = (i / 3) * 3 + j / 3;
                if (boxes[boxIndex].count(cell)) return false;
                boxes[boxIndex].insert(cell);
            }

        return true;
    }
};