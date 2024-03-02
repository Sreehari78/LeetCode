class Solution {
public:
    int trailingZeroes(int n) {
        long long ans = 1, fives = 0, i = n;
        
        while(i) {
            fives += i / 5;
            i /= 5;
        }

        return fives;
    }
};