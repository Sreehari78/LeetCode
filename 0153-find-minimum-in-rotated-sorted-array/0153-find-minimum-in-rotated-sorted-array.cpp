class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start = 0, end = nums.size() - 1, mid = (start + end) / 2, min = nums[0];

        while(start <= end) {
            mid = (start + end) / 2;

            if(nums[start] <= nums[end]) {
            
                if(nums[start] <= nums[mid] && min >= nums[start]) {
                    min = nums[start];
                    start = mid + 1;
                }
                else if(nums[start] >= nums[mid] && min >= nums[mid]) {
                    min = nums[mid];
                    start++;
                }
            }
            
            if(nums[mid] <= nums[end] && min >= nums[mid]) {
                min = nums[mid];
                end = mid - 1;
            }
            else if(nums[mid] >= nums[end] && min >= nums[end]) {
                min = nums[end];
                end--;
            }
            else break;
        }
        
        return min;

    }
};