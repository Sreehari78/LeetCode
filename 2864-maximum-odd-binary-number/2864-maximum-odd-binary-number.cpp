class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int ones = 0;
        string result = "";

        for(char it: s) if(it == '1') ones++;

        for(int i = 0; i < s.length(); i++) result += '0';

        if(ones == 0) return result;

        result[result.length() - 1] = '1';
        ones--;

        int i = 0;
        while(ones) {
            result[i++] = '1';
            ones--;
        }

        return result;
    }
};