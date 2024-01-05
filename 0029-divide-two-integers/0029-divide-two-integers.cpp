class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int divide(long dividend, long divisor) {
        if(dividend == -2147483648 && divisor == -1) return 2147483647;
        if(dividend == -2147483648 && divisor == 1) return -2147483648;
        if(divisor == 1) return dividend;

        int count = 0;
        bool flag1 = false, flag2 = false;
        
        if(dividend < 0) {
            flag1 = true;
            dividend *= -1;
        }
        
        if(divisor < 0) {
            flag2 = true;
            divisor *= -1;
        }

        while(dividend >= divisor) {
            dividend -= divisor;
            count++;
        }

        if(flag1 == flag2) return count;
        else return count * -1;
    }
};