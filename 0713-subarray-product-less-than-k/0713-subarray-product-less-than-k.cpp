class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if (k <= 1)
            return 0;

        int left = 0, count = 0, product = 1;

        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            while (product >= k)
                product /= nums[left++];

            count += right - left + 1;
        }

        return count;
    }
};
