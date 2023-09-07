class Solution {
public:
    bool isPowerOfThree(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(n == 1) return true;
        if(n <= 0 || n % 3 != 0) return false;

        double x = log(n) / log(3);
        x = round(x * 100000) / 100000;

        if(x == int(x)) return true;
        return false;
    }
};