class Solution {
public:
    int strStr(string haystack, string needle) { 
        if(needle.length() > haystack.length()) return -1;
        if(needle == haystack) return 0;
        else if(haystack.length() == 1) return -1;
        
        string subhay = "";

        for(int i = 0; i < haystack.length(); i++){
            subhay = haystack.substr(i, needle.length());
            if(subhay == needle) return i;
        }

        return -1;
    }
};
