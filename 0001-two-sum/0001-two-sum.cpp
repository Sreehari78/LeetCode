class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) 
            if(mp[nums[i]]) return {i, mp[nums[i]] - 1};
            else mp[target - nums[i]] = i + 1;
        
        return {};
    }
};