class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int sum = (nums.size() * (nums.size() + 1)) / 2;
        return sum - accumulate(nums.begin(), nums.end(), 0);
    }
};