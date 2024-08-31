class Solution {
private:
    vector<vector<int>> res;
    vector<int> ans;
    void helper(vector<int>& nums) {
        if (ans.size() == nums.size()) {
            res.push_back(ans);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
            if (find(ans.begin(), ans.end(), nums[i]) == ans.end()) {
                ans.push_back(nums[i]);
                helper(nums);
                ans.pop_back();
            }
}

public : 
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums);
        return res;
    }
};