class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        int ans = 0;
        for(auto it: nums) ans ^= it;
        return ans;
    }
};
