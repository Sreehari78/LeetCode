class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int it: nums) mp[it]++;

        for(auto it: mp) if(it.second > nums.size() / 2) return it.first;
        return -1;
    }
};