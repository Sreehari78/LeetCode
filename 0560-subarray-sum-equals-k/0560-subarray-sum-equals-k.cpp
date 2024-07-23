class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0, count = 0;

        mp[sum] = 1;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum - k;
            count += mp[rem];
            mp[sum]++;
        }

        return count;
        
    }
};