class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        for(int i = 0, j = 0; i < nums.size(); i++) if(nums[i] != 0) swap(nums[i], nums[j++]);
    }
};