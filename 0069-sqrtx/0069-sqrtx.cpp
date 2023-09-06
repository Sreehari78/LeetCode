class Solution {
public:
    int mySqrt(int x) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(x == 0 || x == 1) return x;
        long start = 0, end = x - 1, mid;

        while(start <= end) {
            mid  = (start + end) / 2;

            if(mid*mid > x) end = mid - 1;
            else if(mid*mid < x) start = mid + 1;
            else return mid;
        }

        return floor(end);
    }
};