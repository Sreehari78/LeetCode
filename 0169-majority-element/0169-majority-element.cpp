class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if(mp[nums[i]] > nums.size() / 2) return nums[i];
        }
        return -1;
    }
};