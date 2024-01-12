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

    bool halvesAreAlike(string s) {
        int i = 0, n = s.length() - 1, count1 = 0, count2 = 0;

        while(i < n) {
            if(isVowel(s[i])) count1++;
            if(isVowel(s[n])) count2++;
            i++;
            n--;
        }

        if(count1 == count2) return true;
        return false;
    }
};