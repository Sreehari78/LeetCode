class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int sum=((nums.size()+1)*nums.size())/2, res = 0;
        for(int i = 0; i < nums.size(); i++) {
            res += nums[i];
        }

        return sum - res;
    }
};