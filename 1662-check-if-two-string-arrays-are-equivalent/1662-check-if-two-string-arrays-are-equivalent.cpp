class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "", str2 = "";
        for(auto it: word1) str1 += it;
        for(auto it: word2) str2 += it;

        if(str1 == str2) return true;
        return false;
    }
};