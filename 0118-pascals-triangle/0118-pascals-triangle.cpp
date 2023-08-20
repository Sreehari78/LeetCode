class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int ans = 1, n = 1;
        vector<vector<int>> v;

        while(n  <=  numRows) {
            vector<int> ansRow;
            ansRow.push_back(1);
            for(int i = 1; i < n; i ++) {
                ans = ans * (n - i);
                ans /= i;
                ansRow.push_back(ans);
            }
            v.push_back(ansRow);
            n++;
        }
        
        return v;
    }
};