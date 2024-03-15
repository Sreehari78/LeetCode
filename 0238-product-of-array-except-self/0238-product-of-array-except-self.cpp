class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int product = 1, c = 0;
        vector<int> answer;
        
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] != 0) product *= nums[i];
            else c++;

        for(int i = 0; i < nums.size(); i++)
            if(!c) answer.push_back(product / nums[i]);
            else if(c == 1 && nums[i] == 0) answer.push_back(product);
            else answer.push_back(0);

        return answer;
    }
};