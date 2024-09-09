class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int row = box.size(), col = box[0].size();
        vector<vector<char>> res(col, vector<char>(row, ' '));

        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
               res[j][row - i - 1] = box[i][j];

        for(int j = 0; j < row; j++) {
            int base = col - 1;

            for(int i = col - 1; i > -1; i--)
                if(res[i][j] == '*')
                    base = i - 1;
                else if(res[i][j] == '#') {
                    res[i][j] = '.';
                    res[base][j] = '#';
                    base--;
                }
        }
        
        return res;        
    }
};