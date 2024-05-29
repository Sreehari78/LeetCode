class Solution {
public:
    bool isPalindrome(int x) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if(x < 0) return false;
        long res = 0, y = x;
        
        while(y) {
            res *= 10;
            res += y % 10;
            y /= 10;
        }

        if(res <= INT_MAX && res == x) return true;
        return false;
    }
};