class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), left = 0, right = nums.size() - 1;
        vector<int> sorted(n, -1);

        for(int i = n - 1; i > -1; i--)
            if(abs(nums[left]) >= abs(nums[right])) sorted[i] = nums[left] * nums[left++];
            else sorted[i] = nums[right] * nums[right--];
            
       return sorted;
    }
};