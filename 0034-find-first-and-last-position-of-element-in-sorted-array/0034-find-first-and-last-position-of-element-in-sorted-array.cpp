class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int start = findFirstOccurrence(nums, target);
        int end = findLastOccurrence(nums, target);

        return {start, end};
    }

    int findFirstOccurrence(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                result = mid;
                end = mid - 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result;
    }

    int findLastOccurrence(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                result = mid;
                start = mid + 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result;
    }
};