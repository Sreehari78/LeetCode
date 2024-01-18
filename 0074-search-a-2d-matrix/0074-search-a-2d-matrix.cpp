class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int startRow = 0, endRow = matrix.size() - 1, startCol = 0, endCol = matrix[0].size() - 1;

        while(startRow <= endRow) {
            int mid = (startRow + endRow) / 2;
            if(matrix[mid][0] == target) return true;
            if(matrix[mid][0] < target) startRow = mid + 1;
            else endRow = mid - 1;
        }

        if(startRow > 0) startRow--;

        while(startCol <= endCol) {
            int mid = (startCol + endCol) / 2;
            if(matrix[startRow][mid] == target) return true;
            if(matrix[startRow][mid] < target) startCol = mid + 1;
            else endCol = mid - 1;
        }

        return false;
    }
};