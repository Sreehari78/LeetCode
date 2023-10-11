class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int low = 0, high = 0, mid = 0;

        for(auto it: nums) {
            low = max(low, it);
            high += it;
        }

        if(k == nums.size()) return low;
        if(k == 1) return high;

        while(low <= high) {
            mid = (low + high) / 2;
            int sum = 0, p = 0;

            for(int i = 0; i < nums.size(); i++) {
                if(sum + nums[i] <= mid) sum += nums[i];
                else {
                    sum = nums[i];
                    p++;
                }
            }

            if(p < k) high = mid - 1;
            else low = mid + 1;

        }

        return low;
    }
};