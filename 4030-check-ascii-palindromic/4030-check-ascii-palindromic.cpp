class Solution {
public:
    bool isPalindromic(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        string binary = "";

        for(char c : s) {
            int ascii = c;
            string ans = "";
            
            while(ascii) {
                ans += static_cast<char> (ascii%2) + '0';
                ascii /= 2;
            }
            
            while(ans.length()%8 != 0)
                ans += '0';

            binary += ans;
            
        }

        cout<<binary;

        for(int i = 0; i < binary.length()/2; i++) {
            if(binary[i] != binary[binary.length() - 1 - i])
                return false;
        }

        return true;
    }
};