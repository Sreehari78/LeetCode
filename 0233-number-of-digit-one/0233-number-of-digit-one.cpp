class Solution {
public:
    int countDigitOne(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int count = 0;
        for (long long i = 1; i <= n; i *= 10) {
            long long divider = i * 10;
            count += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
        }
        return count;
    }
};
