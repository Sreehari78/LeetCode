class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        
        s += ' ';
        int n = s.length();
        string str = "", result = "";

        for(int i = 0; i < n; i++) {
            if(s[i] == ' ') {
                if(str != "") stk.push(str);
                str = ""; 
            }
            else str += s[i];
        }

        while(!stk.empty()) { 
            result += stk.top();
            stk.pop();
            if(!stk.empty())
                result += ' ';
        }

        return result;
    }
};