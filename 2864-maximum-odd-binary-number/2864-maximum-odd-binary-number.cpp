class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int ones = 0;
        string result = "";

        for(char it: s) if(it == '1') ones++;

        for(int i = 0; i < s.length(); i++) result += '0';

        if(!ones) return result;

        result[result.length() - 1] = '1';

        int i = 0;
        while(--ones) result[i++] = '1';

        return result;
    }
};