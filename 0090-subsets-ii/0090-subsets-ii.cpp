
class Solution {
public:
    vector<vector<int>> res;
    vector<int> ans;

    void subsetReccursion(vector<int>& nums, int index) {
        if(index >= nums.size()) {
            res.push_back(ans);
            return;
        }

        ans.push_back(nums[index]); 
        subsetReccursion(nums, index + 1);
        ans.pop_back();
        while(index + 1 < nums.size() && nums[index] == nums[index + 1]) index++;
        subsetReccursion(nums, index + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        sort(nums.begin(), nums.end());
        subsetReccursion(nums, 0);
        return res;
    }
};