class Solution {
public:
    bool isHappy(long n) {

        while(n > 9) {
            long x = 0;
            while(n > 0) {
                long i = n % 10;
                x += i*i;
                n /= 10;
            }
            n = x;
        }

        if(n == 1 || n == 7) return true;
        return false;
    }
};
