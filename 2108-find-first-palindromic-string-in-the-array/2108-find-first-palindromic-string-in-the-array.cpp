class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> newWords = words;

        for(int i = 0; i < newWords.size(); i++) reverse(newWords[i].begin(), newWords[i].end());

        for(int i = 0; i < newWords.size(); i++) if(words[i] == newWords[i]) return words[i];

        return "";
    }
};