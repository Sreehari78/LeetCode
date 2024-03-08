class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int it: nums) mp[it]++;

        int freq = 0, result = 0;
        for(auto it: mp) {
            if(freq == it.second) result += freq;
            else if(freq < it.second) {
                freq = it.second;
                result = freq;
            }
        }

        return result;
    }
};