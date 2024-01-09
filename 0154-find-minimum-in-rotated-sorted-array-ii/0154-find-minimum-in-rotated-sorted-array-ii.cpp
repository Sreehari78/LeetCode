class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1, mid = 0, mini = nums[0];
        
        while(start <= end) {

            while(nums[start] == nums[end] && start < end) {
                mini = min(mini, nums[start]);
                start++;
                end--;
                if(start < end) mini = min(nums[start + 1], mini);
            }
            if(nums[start] < nums[end] && nums[start] <= mini) return nums[start];
        
            mid = (start + end) / 2;

            if(nums[mid] < mini) {
                mini = min(nums[mid], mini);
                end = mid - 1;
            }
            else start = mid + 1;
        }

        return mini;
    }
};