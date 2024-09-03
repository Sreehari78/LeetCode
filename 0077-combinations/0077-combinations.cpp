class Solution {
private:
    vector<vector<int>> res;
    vector<int> ans;

    void helper(int n, int k, int index) {
        if(k == 0) {
            res.push_back(ans);
            return;
        }

        if(index > n) 
            return;

        ans.push_back(index);
        helper(n, k - 1, index + 1);
        ans.pop_back();
        helper(n, k, index + 1);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        helper(n, k, 1);
        return res;
    }
};
