class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0] < nums[nums.size() - 1]) return nums[0];

        int start = 0, end = nums.size() - 1, mid = 0, min = nums[0];
        while(start <= end) {
            mid = (start + end) / 2;
            if(nums[mid] < min) {
                min = nums[mid];
                end = mid - 1;
            }
            else start = mid + 1;
        }

        return min;
    }
};