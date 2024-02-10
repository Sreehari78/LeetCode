class Solution {
public:
    int countSubstrings(string s) {
        
        
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