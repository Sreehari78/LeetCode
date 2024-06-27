class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        res.push_back({1});
        if(numRows == 1) return res;

        res.push_back({1, 1});

        for(int i = 0; i < numRows - 2; i++) {
            vector<int> ans, temp = res[1 + i];
            ans.push_back(1);
            
            for(int j = 0; j < temp.size() - 1; j++) ans.push_back(temp[j] + temp[j + 1]);
            ans.push_back(1);
            
            res.push_back(ans);
        }

        return res;

    }
};