class Solution {
public:
    bool isVowel(char c) {
        switch(c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        vector<char> v;
        int l = 0, r = s.length() - 1;

        while(l <= r) {
            if(isVowel(s[l]) && isVowel(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if(!isVowel(s[l])) l++;
            else r--;
        }

        return s;
    }
};