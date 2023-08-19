class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set <int> s;

        for(int it : nums)
            s.insert(it);
        
        if(s.size() == nums.size()) return false;
        return true;
    }
};