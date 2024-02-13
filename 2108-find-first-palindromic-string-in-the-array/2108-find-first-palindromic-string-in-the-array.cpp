class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<string> newWords = words;

        for(int i = 0; i < newWords.size(); i++) reverse(newWords[i].begin(), newWords[i].end());

        for(int i = 0; i < newWords.size(); i++) if(words[i] == newWords[i]) return words[i];

        return "";
    }
};