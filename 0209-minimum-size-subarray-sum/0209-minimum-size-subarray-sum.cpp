class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, mini = nums.size(), sum = 0;
        bool flag = false;

       while(right < nums.size()) {
           sum += nums[right];
           while(sum >= target) {
               sum -= nums[left];
               flag = true;
               mini = min(right - left + 1, mini);
               left++;
           }
           right++;
       }

        if(flag) return mini;
        return 0;
    }
};