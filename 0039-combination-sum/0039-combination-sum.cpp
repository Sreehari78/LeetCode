class Solution {
public:
    vector<vector<int>> result; 
    vector<int> ans;
    void reccusriveMethod(int index, int remainingTarget, vector<int>& candidates) {        
        if (remainingTarget < 0) return;

        if(index == candidates.size()) {
            if(remainingTarget == 0) {
                result.push_back(ans);
            }
            return;
        }

        if(candidates[index] <= remainingTarget) {
            ans.push_back(candidates[index]);
            reccusriveMethod(index, remainingTarget - candidates[index], candidates);
            ans.pop_back();
        }

        reccusriveMethod(++index, remainingTarget, candidates);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        reccusriveMethod(0, target, candidates);
        return result;
    }
};
