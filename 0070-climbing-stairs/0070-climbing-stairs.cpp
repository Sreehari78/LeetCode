class Solution {
public:
    int climbStairs(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if (n == 0) return 1;
        else if (n == 1) return 1;
        else if (n == 2) return 2;
        else {
            int fib1 = 1;
            int fib2 = 2;
            for (int i = 3; i <= n; ++i) {
                int fib = fib1 + fib2;
                fib1 = fib2;
                fib2 = fib;
            }
            return fib2;
        }
    }
};