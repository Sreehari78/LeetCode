int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeated = 0, missing = (nums.size()*(nums.size() + 1)) / 2;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if(mp[nums[i]] > 1) {
                repeated = nums[i];
                continue;
            }
            missing -= nums[i];
        }

        return {repeated, missing};
    }
};