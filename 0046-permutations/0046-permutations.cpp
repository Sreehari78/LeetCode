class Solution {
public:
    vector<vector<int>> result;
    vector<int> ans;
    unordered_map<int, int> mp;

    void reccursiveMethod(vector<int>& nums) {
        if(ans.size() == nums.size()) {
            result.push_back(ans);
            return;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(mp[i] == 0) {
                ans.push_back(nums[i]);
                mp[i] = 1;
                reccursiveMethod(nums);
                mp[i] = 0;
                ans.pop_back();
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        reccursiveMethod(nums);
        return result;
    }
};