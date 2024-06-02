class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int it: nums) mp[it]++;
        for(int i = 0; i < nums.size(); i++) if(mp[i] == 0) return i;
        return nums.size();
    }
};