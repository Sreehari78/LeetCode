class Solution {
public:
    double myPow(double x, long n) {
        
        if(n == 0 || x == 1) return 1;

        if(x == -1) {
            if(n % 2 == 0) return x*= -1;
            else return x;
        }

        if(n < 0) {
            if(n <= INT_MIN && x >= 2) return 0.00000;

            x = 1/x;
            n *= -1;
        }

        double result = 1, product = x;

        while(n > 0){
            if(n % 2 == 1) result *= product;
            product *= product;
            n /= 2;
        }
        return result;
    }
};