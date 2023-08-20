class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ansRow;
        long ans = 1, n = rowIndex + 1;
        
        ansRow.push_back(ans);
        for(int i = 1; i < n; i ++) {
                ans = ans * (n - i);
                ans /= i;
                ansRow.push_back(ans);
            }
        return ansRow;
    }
};