class Solution {
public:
    bool isPalindrome(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        string s1 = "", s2 = "";

        for (char it : s)
            if (isalpha(it) || isdigit(it))
                s1 += tolower(it);

        s2 = s1;
        reverse(s1.begin(), s1.end());
        
        return s2 == s1;
    }
};