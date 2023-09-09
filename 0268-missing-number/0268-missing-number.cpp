class Solution {
public:
    int missingNumber(vector<int>& nums) {
         std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map <int, int> mp;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        for(int i = 0; i <= nums.size(); i++) if(mp[i] != 1) return i;
        return -1;
    }
};