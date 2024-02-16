class Solution {
public:      
    bool isValidSudoku(vector<vector<char>>& board) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<vector<char>> transpose(9, vector<char>(9));
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);

        
        for(int i = 0; i < 9; i++) for(int j = 0; j < 9; j++) transpose[i][j] = board[j][i]; 

        //rows
        for(vector<char> it: board) 
            for(int j = 0; j < 9; j++) 
                for(int k = j + 1; k < 9; k++) if(it[k] != '.' && it[j] == it[k]) return false;
        
        //columns
        for(vector<char> it: transpose) 
            for(int j = 0; j < 9; j++) 
                for(int k = j + 1; k < 9; k++) if(it[k] != '.' && it[j] == it[k]) return false;
        
        //3x3 grids
        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++) {
                char cell = board[i][j];
                if(cell == '.') continue;

                int boxIndex = (i / 3) * 3 + j / 3;
                if (boxes[boxIndex].count(cell)) return false;
                boxes[boxIndex].insert(cell);
            }

        return true;
    }
};