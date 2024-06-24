class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        
        if (nums[start] <= nums[end])
            return nums[start];

        while (start <= end) {
            int mid = (start + end) / 2;

            if (mid < nums.size() - 1 && nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            else if (mid > 0 && nums[mid - 1] > nums[mid])
                return nums[mid];
            else if (nums[mid] < nums[end])
                end = mid - 1;
            else
                start = mid + 1;
        }

        return nums[end];
    }
};