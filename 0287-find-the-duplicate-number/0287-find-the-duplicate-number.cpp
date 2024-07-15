class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int hare = 2, tortise = 0;

        while(nums[hare] != nums[tortise]) {
            hare = nums[nums[hare]];
            tortise = nums[tortise];
        }

        return nums[tortise];
    }
};