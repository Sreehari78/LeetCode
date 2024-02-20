class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        sum = (n * (n + 1)) / 2;

        return sum - accumulate(nums.begin(), nums.end(), 0);
    }
};