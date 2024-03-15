class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<int> output;
        int n = nums.size();
        output.push_back(1);
        for (int i = 1; i <= n; i++) {
            output.push_back(output[i - 1] * nums[i - 1]);
        }
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }
        output.pop_back();
        return output;
    }
};