class Solution {
public:
    bool isPalindrome(int x) {
        long z = 0, y = x;

        while(y != 0 && y > 0){
            z *= 10;
            z += y % 10;
            y /= 10;
        }

        if(x == z) return true;

        return false;
    }
};