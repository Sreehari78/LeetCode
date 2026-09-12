class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long res = 0;

        for(int i = 0; i < nums.size(); i++)
            for(int j = i + 1; j < nums.size(); j++) {
                if(i == j) continue;

                long long g = gcd(nums[i], nums[j]);
                long long ans = (1LL * nums[i] / g * nums[j] / g);
                res = max(res, ans);
            }

        return res;
    }
};