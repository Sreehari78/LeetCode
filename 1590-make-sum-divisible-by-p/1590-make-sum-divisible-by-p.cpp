class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long totalSum = 0, prefixSum = 0;

        for (int num : nums)
            totalSum += num;

        int rem = totalSum % p, res = nums.size();
        if (rem == 0) return 0;

        unordered_map<int, int> prefixMod;
        prefixMod[0] = -1; 

        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            int currentMod = prefixSum % p;
            int targetMod = (currentMod - rem + p) % p;

            if (prefixMod.find(targetMod) != prefixMod.end())
                res = min(res, i - prefixMod[targetMod]);

            prefixMod[currentMod] = i;
        }

        return res == nums.size() ? -1 : res;
    }
};