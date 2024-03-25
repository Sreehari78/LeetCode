class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> result;

        for (int it: nums) {
            int x = abs(it);
            if (nums[x - 1] > 0)
                nums[x - 1] *= -1;
        }

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] > 0)
                result.push_back(i + 1);

        return result;
    }
};