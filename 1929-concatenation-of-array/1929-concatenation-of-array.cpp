class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int n = nums.size();
        for(int i = 0; i < n; i++) nums.push_back(nums[i]);
        return nums;
    }
};