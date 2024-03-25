class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {
            int x = abs(nums[i]) - 1;
            if(nums[x] < 0) result.push_back(abs(nums[i]));
            else nums[x] *= -1;
        }

        return result;
    }
};