class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "", str1 = "";
        for(int i = 0; i < s.length(); i++)
            if(isalnum(s[i])) str += tolower(s[i]);
        
        str1 = str;
        int n = str.length();
        
        for(int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);
        
        if(str == str1) return true;
        return false;
    }
};