class Solution {
public:
    bool isPowerOfTwo(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if(n == 0) return false;
        while(n % 2 == 0) n /= 2;
        return n == 1;
    }
};