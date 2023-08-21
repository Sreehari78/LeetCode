class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        int diff, n = nums.size();

        for(int i = 0; i < n; i++) {

            if(!mp[nums[i]]) mp[nums[i]] = i + 1;
            else {
                diff = abs(i + 1 - mp[nums[i]]);
                mp[nums[i]] = i + 1;
                if(diff <= k) return true;
            }
        }
        return false;
    }
};