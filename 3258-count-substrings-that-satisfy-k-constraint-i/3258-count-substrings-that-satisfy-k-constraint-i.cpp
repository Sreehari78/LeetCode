class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int zeros = 0, ones = 0, left = 0, right = 0, res = 0;

        while (right < s.length()) {

            (s[right] == '0') ? zeros++ : ones++;

            while (zeros > k && ones > k) {
                (s[left] == '0') ? zeros-- : ones--;
                left++;
            }
            res += right - left + 1;
            right++;
        }

        return res;
    }
};