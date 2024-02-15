class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        sort(nums.begin(), nums.end());
        long long n = nums.size(), perimeter = 0;

        for(int it: nums) perimeter += it;

        for(int i = n - 1; i > -1; i--) {
            perimeter -= nums[i];
            if(perimeter > nums[i]) return perimeter + nums[i];
        }

        return -1;
    }
};