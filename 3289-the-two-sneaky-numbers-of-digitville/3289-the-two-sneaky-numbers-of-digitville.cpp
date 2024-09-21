class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> res;

        for(int it: nums)
            if(mp[it] != 1)
                mp[it]++;
            else 
                res.push_back(it);
        
        return res;
    }
};