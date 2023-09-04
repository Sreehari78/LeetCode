class Solution {
public:
    double myPow(double x, long n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
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
