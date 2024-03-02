class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int n = nums.size();
        int left = 0
        int right = n - 1;
        vector<int> sorted(n, -1);

        for(int i = n - 1; i > -1; i--)
            if(abs(nums[left]) >= abs(nums[right])) sorted[i] = nums[left] * nums[left++];
            else sorted[i] = nums[right] * nums[right--];

       return sorted;
    }
};