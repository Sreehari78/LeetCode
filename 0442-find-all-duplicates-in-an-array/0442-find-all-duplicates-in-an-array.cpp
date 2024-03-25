class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int x = abs(nums[i]) - 1;
            if (nums[x] < 0)
                result.push_back(abs(nums[i]));
            else
                nums[x] *= -1;
        }

        return result;
    }
};