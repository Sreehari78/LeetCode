class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long res = 0;

        for(int i = 0; i < nums.size(); i++)
            for(int j = 0; j < nums.size(); j++) {
                if(i == j) continue;

                long long ans = (1LL * nums[i] * nums[j]) / pow(__gcd(nums[i], nums[j]), 2);
                res = max(res, ans);
            }

        return res;
    }
};