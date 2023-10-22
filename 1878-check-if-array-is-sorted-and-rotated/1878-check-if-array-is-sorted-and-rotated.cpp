class Solution {
public:
    bool check(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int count = 0;
        
        for(int i = 1; i < nums.size(); i++)
            if(nums[i] < nums[i - 1]) count++;
        
        if(count>1) return false;
        if(count == 1) if(nums[nums.size() - 1] > nums[0]) return false;
        return true;
    }
};