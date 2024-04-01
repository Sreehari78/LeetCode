class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, n = s.length() - 1;
        for(int i = n; i > -1; i--) 
        {
            if(s[i] == ' ' && count == 0) continue;
            if(s[i] == ' ' && count != 0) break;
            if(s[i] != ' ') count++;
            
        }
        return count;
    }
};