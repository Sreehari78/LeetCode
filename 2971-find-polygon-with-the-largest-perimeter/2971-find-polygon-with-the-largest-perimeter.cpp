class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long n = nums.size(), perimeter = 0;

        for(int it: nums) perimeter += it;

        for(int i = n - 1; i >= 2; i--) {
            perimeter -= nums[i];
            if(perimeter > nums[i]) return perimeter + nums[i];
        }

        return -1;
    }
};