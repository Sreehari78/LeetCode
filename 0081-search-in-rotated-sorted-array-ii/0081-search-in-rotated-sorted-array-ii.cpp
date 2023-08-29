class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid = 0;

        while(start <= end) {
            mid = (start + end) / 2;

            if(target == nums[mid]) return true;

            if(nums[start] == nums[mid] && nums[mid] == nums[end]) {
                start++;
                end--;
                continue;
            }
            
            if(nums[start] <= nums[mid]) {   //check if left half is sorted
                if(nums[start] <= target && target < nums[mid]) end = mid - 1;
                else start = mid + 1;
            }

            if(nums[mid] <= nums[end]) {   //check if right half is sorted
                if(nums[end] >= target && target > nums[mid]) start = mid + 1;
                else end = mid - 1;
            }
        }
        return false;
    }
};
