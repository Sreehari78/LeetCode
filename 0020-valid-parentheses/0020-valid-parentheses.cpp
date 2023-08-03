class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk; 
        char x;

        for(int i = 0; i < s.length(); i++ ){
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
                continue;
            }

            if(stk.empty()){
                return false;
            }

            x = stk.top();
            stk.pop();

            switch(s[i]){
                case ')':
                    if(x != '(') return false;
                    break;

                case '}':
                    if(x != '{') return false;
                    break;

                case ']':
                    if(x != '[') return false;
                    break;        
            }
        }

        return (stk.empty());
    }
};