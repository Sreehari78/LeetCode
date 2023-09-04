class Solution {
public:
    double myPow(double x, long n) {
        if(n < 0) {
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