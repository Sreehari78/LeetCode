class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int result = INT_MIN, sum = 0, j = 0;
        if(nums.size() == 1) return nums[0];
        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum < nums[i]) sum = nums[i];
            result = max(result, sum);
        }

        return result;
    }
};