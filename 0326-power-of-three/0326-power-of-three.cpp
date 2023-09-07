class Solution {
public:
    bool isPowerOfThree(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        // if(n == 1) return true;
        // if(n <= 0 || n % 3 != 0) return false;

        return (n > 0) && 1162261467 % n == 0;
    }
};