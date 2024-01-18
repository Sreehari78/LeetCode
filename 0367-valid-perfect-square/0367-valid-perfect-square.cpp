class Solution {
public:
    bool isPerfectSquare(int num) {
        long long start = 0, end = num;

        while(start <= end) {
            long long mid = (start + end) / 2;

            if(mid*mid == num) return mid;
            else if(mid*mid > num) end = mid - 1;
            else start = mid + 1;
        }

        return 0;
    }
};