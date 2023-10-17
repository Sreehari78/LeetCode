class Solution {
public:
    vector<int> ans;
    set<vector<int>> s;

    void subsetReccursion(vector<int>& nums, int index) {
        if(index >= nums.size()) {
            s.insert(ans);
            return;
        }

        ans.push_back(nums[index]);
        subsetReccursion(nums, ++index);
        ans.pop_back();
        subsetReccursion(nums, index);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        sort(nums.begin(), nums.end());
        subsetReccursion(nums, 0);
        vector<vector<int>> res(s.begin(), s.end());
        return res;
    }
};