class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int it : nums)
            if (!mp[it])
                mp[it]++;
            else
                return true;
        
        return false;
    }
};