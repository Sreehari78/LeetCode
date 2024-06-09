class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> res(nums.size());
        int p = 0, n = 1;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                res[p] = nums[i];
                p += 2;
            }
            else {
                res[n] = nums[i];
                n += 2;
            }
        }

        return res;
    }
};