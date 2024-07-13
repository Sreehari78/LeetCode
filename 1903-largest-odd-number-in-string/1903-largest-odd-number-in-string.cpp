class Solution {
public:
    string largestOddNumber(string num) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        for (int i = num.length() - 1; i > -1; i--)
            if ((num[i] - '0') % 2 == 1)
                return num.substr(0, i + 1);

        return "";
    }
};