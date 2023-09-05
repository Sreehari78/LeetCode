class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(nums.size() == 3) return nums[0] + nums[1] + nums[2];

        sort(nums.begin(), nums.end());

        int min = INT_MAX, result = 0;
        for(int i = 0; i < nums.size(); i++) {

            int k = nums.size() - 1, j = i + 1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < target) j++;
                else if(sum > target) k--;
                else return sum;

                int diff = abs(sum - target);
                if(min > diff) {
                    min = diff;
                    result = sum;
                }
            }
        }

        return result;
    }
};