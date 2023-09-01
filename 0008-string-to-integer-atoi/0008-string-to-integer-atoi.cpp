class Solution {
public:
    int myAtoi(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        string str = "";
        for(int i = 0; i < s.length(); i++)
            if(s[i] != ' ') {
                str += s[i];
                if(s[i+1] == ' ') break;
            }

        int i = 0, flag = 0, n = str.length();
        char sign = str[0];

        if(sign == '-' || sign == '+') {
            i = 1;
            if(sign == '-') flag = 1;
        }

        long val = 0;
        for(i; i < n && isdigit(str[i]) && val <= INT_MAX; i++)
            val = val * 10 + str[i] - '0';
        
        if(flag) val *= -1;

        if(val > INT_MAX) return 2147483647;
        if(val < INT_MIN) return -2147483648;

        return val;

    }
};