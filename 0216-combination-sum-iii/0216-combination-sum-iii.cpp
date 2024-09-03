class Solution {
private:
    vector<vector<int>> res;
    vector<int> ans;

    void helper(int k, int n, int index) {
        if(n == 0 && ans.size() == k) {
            res.push_back(ans);
            return;
        }

        if(n < 0 || ans.size() > k || index > 9)
            return;
        
        ans.push_back(index);
        helper(k, n - index, index + 1);
        ans.pop_back();
        helper(k, n, index + 1);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        helper(k, n, 1);
        return res;
    }
};