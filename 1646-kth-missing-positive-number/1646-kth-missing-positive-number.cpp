class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int low = 0, high = arr.size() - 1, mid = 0, missing = 0;

        while(low <= high) {
            mid = (low + high) / 2;

            missing = arr[mid] - (mid + 1);

            if(missing < k) low = mid + 1;
            else high = mid - 1;
        }

        return low + k;
    }
};
