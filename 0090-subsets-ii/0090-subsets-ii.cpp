class Solution {
public:
    vector<int> ans;
    vector<vector<int>> res;

    void helper(vector<int>& nums, int n) {
            res.push_back(ans);

        for(int i = n; i < nums.size(); i++) {
            if(i != n && nums[i] == nums[i - 1])
                continue;
                
            ans.push_back(nums[i]);
            helper(nums, i + 1);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        helper(nums, 0);
        return res;
    }
};