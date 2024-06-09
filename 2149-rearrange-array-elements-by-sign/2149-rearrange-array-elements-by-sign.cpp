class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> positive, negative;
        int p = 0, n = 0;

        for(int it: nums)  
            if(it > 0) positive.push_back(it);
            else negative.push_back(it);
        
        for(int i = 0; i < nums.size() / 2; i++) {
            nums[2 * i] = positive[p++];
            nums[2 * i + 1] = negative[n++];
        }
        
        return nums;
    }
};