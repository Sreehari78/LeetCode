class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> mp;

        for(int it : nums)
        {
            if(mp[it] > 1) return true;
            mp[it]++;
        }
        
        if(mp.size() == nums.size()) return false;
        return true;
    }
};