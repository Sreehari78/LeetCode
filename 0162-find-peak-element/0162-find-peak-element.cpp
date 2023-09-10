class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(nums.size() == 1) return 0;

        int low = 0, high = nums.size() - 1, mid = 0;

        if(nums[low] > nums[low + 1]) return low;
        if(nums[high] > nums[high - 1]) return high;
        low++;
        high--;

        while(low <= high) {
            mid = (low + high) / 2;

            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;
                        
            if(nums[mid - 1] <= nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return mid;
    }
};
