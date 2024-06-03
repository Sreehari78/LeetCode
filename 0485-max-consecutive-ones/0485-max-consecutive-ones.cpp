class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];

        int left = 0, res = 0;

        while (left < nums.size())
            if (nums[left] == 0)
                left++;
            else
                break;

        int right = left;
        while (left <= right && right < nums.size()) {
            if (nums[right] == 1) {
                res = max(res, right - left + 1);
                right++;
            } else {
                while (right < nums.size() && nums[right] == 0) right++;
                left = right;
            }
        }

        return res;
    }
};