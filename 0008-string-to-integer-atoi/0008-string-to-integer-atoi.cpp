class Solution {
public:
    int myAtoi(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        if (!s.length())
            return 0;

        long long res = 0, k = 0;
        bool isNegative = false;

        while (k < s.length())
            if (s[k++] != ' ')
                break;

        if (s[k - 1] == '-')
            isNegative = true;
        else if (s[k - 1] == '+')
            isNegative = false;
        else if (isdigit(s[k - 1]))
            res = s[k - 1] - '0';
        else
            return res;

        for (int i = k; i < s.length(); i++)
            if (res > INT_MAX)
                break;
            else if (isdigit(s[i]))
                res = res * 10 + s[i] - '0';
            else
                break;

        if (isNegative)
            res* -1 < INT_MIN ? res = INT_MIN : res = res * -1;
        else
            res > INT_MAX ? res = INT_MAX : res = res;
        return res;
    }
};