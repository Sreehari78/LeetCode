class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size() == 0) return ""; 
        if(strs.size() == 1) return strs[0];

        sort(strs.begin(), strs.end());

        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];
        string s = "";

        for(int i = 0; i < s1.length(); i++){
            if(s1[i] == s2[i]) s += s1[i];
            else break;
        }
        
        return s;
    }
};
