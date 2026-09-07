class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1, num = n;

        while(num) {
            sum += num%10;
            product *= num%10;
            num /=10;
        }

        return n % (sum + product) == 0;
    }
};