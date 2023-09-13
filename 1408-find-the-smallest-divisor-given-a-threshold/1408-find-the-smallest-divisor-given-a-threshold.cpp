class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int low = 1, high = INT_MIN, mid = 0, sum = 0, minSum = INT_MAX;

        for(auto it: nums) high = max(high, it);

        while(low <= high) {

            mid = (low + high) / 2;

            sum = 0;
            for(auto it: nums) sum += ceil(((double)it / (double)mid));

            if(sum <= threshold) {

                if(minSum == INT_MAX) minSum = sum;
                else if(abs(sum - threshold) < abs(minSum - threshold)) minSum = sum;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return low;
    }
};