class Solution {
public:
    void reccursion(int index, vector<int>& candidates, int remainingTarget, vector<int>& ans, vector<vector<int>>& result) {

        if(remainingTarget == 0) {
            result.push_back(ans);
            return;
        }

        for(int i = index; i < candidates.size(); i++) {
            if(i > index && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > remainingTarget) break;
            ans.push_back(candidates[i]);
            reccursion(i + 1, candidates, remainingTarget - candidates[i], ans, result);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<vector<int>> result;
        vector<int> ans;
        
        sort(candidates.begin(), candidates.end());
        reccursion(0, candidates, target, ans, result);
        
        return result;
    }
};