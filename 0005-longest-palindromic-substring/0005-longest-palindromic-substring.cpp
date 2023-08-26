class Solution {
public:
    string longestPalindrome(string rev) {
        int length = 0, n = rev.length();
        string s = rev;
        reverse(s.begin(), s.end());
        string pal = "";
        // pal += s[0];

        if(n == 1) return s;

        if(s == rev) return rev;
        
        for(int i = 0; i < n; i++) {
            
            for(int j = n - 1; j > -1; j--) {

                if(s[i] != s[j]) continue;
                int diff = abs(i - j) + 1;
                string s1 = s.substr(i, diff);
                string s2 = s1;
                reverse(s1.begin(), s1.end());
                if(s1 == s2 && length < s1.length()) {
                    length = s1.length();
                    pal = s1;
                } 
            }
        }

        return pal;
    }
};