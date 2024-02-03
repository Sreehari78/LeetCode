class Solution {
public:
    bool isPalindrome(int x) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if(x < 0) return 0;

        string str1 = to_string(x), str2 = to_string(x);
        reverse(str1.begin(), str1.end());
        if(str1 == str2) return 1;
        return 0;
    }
};