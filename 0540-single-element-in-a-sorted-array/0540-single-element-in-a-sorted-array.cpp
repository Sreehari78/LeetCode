class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(nums.size() == 1) return nums[0];

        int low = 0, high = nums.size() - 1, mid = 0, small = INT_MAX, index = -1;

        if(nums[low] != nums[low + 1]) return nums[low];
        if(nums[high] != nums[high - 1]) return nums[high];
        low++;
        high--;

        while(low <= high) {
            mid = (low + high) / 2;

            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) return nums[mid];

            if(nums[mid] == nums[mid - 1]) {
                if(mid % 2 == 1) low = mid + 1;
                else high = mid - 1;
            }

            if(nums[mid] == nums[mid + 1]) {
                if(mid % 2 == 0) low = mid + 1;
                else high = mid - 1;
            }
        }
        return mid;
    }
};