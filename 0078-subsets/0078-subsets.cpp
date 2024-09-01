class Solution {
private:
    vector<vector<int>> res;
    vector<int> ans;
    
    void helper(vector<int>& nums, int n) {
        if(n == nums.size()) {
            res.push_back(ans);
            return;
        }
        
        ans.push_back(nums[n]);
        helper(nums, n + 1);
        ans.pop_back();
        helper(nums, n + 1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        helper(nums, 0);
        return res;    
    }
};