class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        unordered_map <int, int> mp;
        vector<int> result(2, 0);
        int i = 0;

        for(int it: nums) mp[it]++;

        for(int it: nums) if(mp[it] == 1) result[i++] = it;
        return result;
    }
};