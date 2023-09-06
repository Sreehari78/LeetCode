class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "", str1 = "";
        for(int i = 0; i < s.length(); i++)
            if((s[i] - 'A' >= 0 && s[i] - 'A' <= 25) || (s[i] - 'a' >= 0 && s[i] - 'a' <= 25) || (s[i] - '0' >= 0 && s[i] - '0' <= 9)) str += tolower(s[i]);
        
        str1 = str;
        int n = str.length();
        
        for(int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);
        
        if(str == str1) return true;
        return false;
    }
};