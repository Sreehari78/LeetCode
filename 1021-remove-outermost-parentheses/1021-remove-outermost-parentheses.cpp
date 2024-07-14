class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int count = 0;

        for(int i = 0; i < s.length(); i++)
            if(s[i] == '(' && count == 0) count++;
            else if(s[i] == ')' && count == 1) count--;
            else if(s[i] == '(' && count > 0) {
                count++;
                res += s[i];
            }
            else if(s[i] == ')' && count > 1) {
                count--;
                res += s[i];
            }

        return res;
    }
};