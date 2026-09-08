class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) { 
        unordered_map<int, int> mp;      
        int left = 0, right = 0, res = 0;

        while(right < nums.size()) {
            while(right < nums.size() && nums[left] == nums[right])
                right++;

            mp[nums[left]]++;
            left = right;
        }
        
        for(auto &[k, v] : mp) if(v == 1) res++;

        return res;
    }
};