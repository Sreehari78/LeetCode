class Solution {
public:
    string longestPalindrome(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if(s.length() <= 1) return s;
        
        int n = s.length(), st = 0, end = 0, max_length = 0;

        for(int i = 0; i < n; i++)  {
            int l = i, r = i;
            while(l >= 0 && r < n)
                if(s[l] == s[r]) {
                    l--;
                    r++;
                }
                else break;
            
            int length = r - l - 1;
            if(length > max_length) {

                max_length = length;
                st = l + 1;
            }
        }

        for(int i = 0; i < n; i++)  {
            int l = i, r = i+1;
            while(l >= 0 && r < n)
                if(s[l] == s[r]) {
                    l--;
                    r++;
                }
                else break;
            
            int length = r - l - 1;
            if(length > max_length) {

                max_length = length;
                st = l + 1;
            }
        }

        return s.substr(st, max_length);
    }
};