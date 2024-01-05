class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int divide(long dividend, long divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        if(divisor == 1) return dividend;

        long count = 0;
        bool flag1 = false, flag2 = false;

        if(dividend < 0) flag1 = true;
        if(divisor < 0) flag2 = true;

        dividend = abs(dividend);
        divisor = abs(divisor);

        while(dividend >= divisor) {
            dividend -= divisor;
            count++;
        }

        if(flag1 == flag2) return count;
        else return -count;
    }
};