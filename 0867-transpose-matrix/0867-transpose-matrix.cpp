class Solution {
public:
     Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> result(m, vector<int> (n));

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                result[j][i] = matrix[i][j];
        
        return result;
    }
};