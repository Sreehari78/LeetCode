class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool isFirst) {
        int start = 0, end = nums.size() - 1, pos = -1;

        while(start <= end) {
            int mid = (start + end) / 2;

            if(nums[mid] == target) {
                pos = mid;
                if(isFirst)
                    end = mid - 1;
                else 
                    start = mid + 1;
            }

            else if(nums[mid] > target)
                end = mid - 1;
            else 
                start = mid + 1;
        }

        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {       
        return {binarySearch(nums, target, true), binarySearch(nums, target, false)};
    }
};