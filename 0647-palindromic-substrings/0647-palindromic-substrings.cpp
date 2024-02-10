class Solution {
public:
    int countSubstrings(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int result = 0;

        for(int i = 0; i < s.length(); i++) {
            int  left = i, right = i;
            while(left > -1 && right < s.length()) 
                if(s[left] == s[right]) {
                    result++;
                    left--;
                    right++;
                }
                else break;
       }

       for(int i = 0; i < s.length(); i++) {
            int  left = i, right = i+1;
            while(left > -1 && right < s.length()) 
                if(s[left] == s[right]) {
                    result++;
                    left--;
                    right++;
                }
                else break;
       }
       return result;
    }
};