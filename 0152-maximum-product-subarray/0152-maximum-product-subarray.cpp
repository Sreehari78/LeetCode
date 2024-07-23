class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        double prefix = 1, suffix = 1, res = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (!prefix)
                prefix = 1;

            if(!suffix)
                suffix = 1;

            prefix = prefix * nums[i];
            suffix = suffix * nums[nums.size() - i - 1];
            res = max(res, max(prefix, suffix));
        }

        return res;
    }
};