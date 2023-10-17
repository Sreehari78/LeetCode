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
        subsetReccursion(nums, ++index);
        ans.pop_back();
        subsetReccursion(nums, index);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        subsetReccursion(nums, 0);
        return res;
    }
};