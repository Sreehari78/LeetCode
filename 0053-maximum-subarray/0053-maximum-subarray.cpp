class Solution {
public:
    int speedUp = [] {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        return 0;
    }();
    
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN, sum = 0;

        for(int it: nums) {
            sum = max(sum + it, it);
            res = max(res, sum);
        }

        return res;        
    }
};