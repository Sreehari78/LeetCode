class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while(x) {
            res *= 10;
            res += x % 10;
            x = x / 10;
        }

        if(res < INT_MAX && res > INT_MIN) return res;
        return 0;
    }
};