class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        for(int i = 0; i < s.length(); i++) {
            int left = i, right = i;

            while(left > -1 && right < s.length() && s[left] == s[right]) {
                right++;
                left--; 
            }

            if(res.length() < right - left - 1)
                res = s.substr(left + 1, right - left - 1);

            left = i, right = i + 1;

            while(left > -1 && right < s.length() && s[left] == s[right]) {
                right++;
                left--; 
            }

            if(res.length() < right - left - 1)
                res = s.substr(left + 1, right - left - 1);
        }

        return res;
    }
};