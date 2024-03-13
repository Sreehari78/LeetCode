class Solution {
public:
    int pivotInteger(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if (n == 1)
            return 1;

        int start = 1, end = n, sum = n * (n + 1) / 2;

        while (start < end) {
            int mid = (start + end) / 2, midSum = mid * (mid + 1) / 2;
            if (midSum == sum - midSum + mid)
                return mid;
            else if (midSum < sum - midSum + mid)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }
};