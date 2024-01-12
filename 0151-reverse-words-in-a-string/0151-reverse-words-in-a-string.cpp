int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

class Solution {
public:
    string reverseWords(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
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