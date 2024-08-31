class Solution {
private:
    vector<vector<int>> res;
    vector<int> ans;

    void helper(vector<int>& candidates, int target, int n) {
        if(target < 0)
            return;

        if(target == 0) {
            res.push_back(ans);
            return;
        }

        for(int i = n; i < candidates.size(); i++) {
            if(i > n && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            ans.push_back(candidates[i]);
            helper(candidates, target - candidates[i], i + 1);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, 0);
        return res;
    }
};