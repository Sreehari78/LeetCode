class Solution {
public:
    bool isPalindromic(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        string binary = "";
        for (char c : s) {
            int ascii = int(c);
            string bin = bitset<8>(ascii).to_string();
            binary += bin;
        }

        for(int i = 0; i < binary.length()/2; i++) {
            if(binary[i] != binary[binary.length() - 1 - i])
                return false;
        }

        return true;
    }
};