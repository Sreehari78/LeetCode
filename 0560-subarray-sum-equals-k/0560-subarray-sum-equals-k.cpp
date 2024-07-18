class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size() == 1) return nums[0] == k;
        int res = 0;

        for(int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for(int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if(sum == k) res++;
            } 
        }

        return res;
    }
};