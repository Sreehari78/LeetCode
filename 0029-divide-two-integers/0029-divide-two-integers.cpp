class Solution {
public:
    int divide(int dividend, int divisor) {
        return (long) dividend / divisor > INT_MAX ? INT_MAX : dividend / divisor;
    }
};