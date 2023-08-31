class Solution {
public:
    int reverse(int x) {
        
        long temp = 0, flag = 0;
        
        if(x < 0) flag = 1;
        x = abs(x);

        while(x > 0) {
            temp = temp * 10 + x % 10;
            x /= 10;
        }

        if(temp > INT_MAX || temp < INT_MIN) return 0;

        if(flag) temp *= -1;
        x = temp;
        return temp;
    }
};