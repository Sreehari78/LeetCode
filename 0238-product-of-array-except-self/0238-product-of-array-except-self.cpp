class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int product = 1, flag = 0, val = 0;
        vector<int> answer, ans;
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(0);
            if(nums[i] == 0)
                answer.push_back(0);
        }
        
        if(answer.size() == nums.size()) return answer;
        if(answer.size() > 1) return ans;

        
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] != 0) product *= nums[i];
            else flag = 1;

        answer.clear();

        for(int i = 0; i < nums.size(); i++){
            if(!flag) val = product / nums[i];
            else if(nums[i] == 0) val = product;
            else val = 0;
            answer.push_back(val);
        }

        return answer;
    }
};