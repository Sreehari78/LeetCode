class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        sort(nums.begin(), nums.end());
        int res = INT_MAX, minDiff  = INT_MAX;

        for(int left = 0; left < nums.size(); left++) {
            if(left > 0 && nums[left] == nums[left - 1]) continue;
            int mid = left + 1, right = nums.size() - 1;

            while(mid < right) {
                int sum = nums[left] + nums[mid] + nums[right];

                if(minDiff > abs(target - sum)) {
                    minDiff = abs(target - sum);
                    res = sum;
                }

                if(sum < target) mid++;
                else if(sum > target) right--;
                else return sum;
            }
        }

        return res;
    }
};