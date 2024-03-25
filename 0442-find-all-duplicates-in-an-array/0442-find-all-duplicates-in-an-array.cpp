class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        vector<int> result;

        for (int it : nums) {
            int x = abs(it) - 1;
            if (nums[x] < 0)
                result.push_back(abs(it));
            else
                nums[x] *= -1;
        }

        return result;
    }
};