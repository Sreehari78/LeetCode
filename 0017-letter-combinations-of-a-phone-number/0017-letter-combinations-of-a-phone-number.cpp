class Solution {
public:
    vector<string> result;
    string s = "", str = "";
    void  reccursiveMethod(int index, string digits) {
        if(digits == "") return;

        if(index == digits.length()) {
            result.push_back(s);
            return;
        }
        str = s;

        switch(digits[index]) {
            case '2':
                for(char i = 'a'; i <= 'c'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
            case '3':
                for(char i = 'd'; i <= 'f'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
            case '4':
                for(char i = 'g'; i <= 'i'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
            case '5':
                for(char i = 'j'; i <= 'l'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
            case '6':
                for(char i = 'm'; i <= 'o'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
            case '7':
                for(char i = 'p'; i <= 's'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
            case '8':
                for(char i = 't'; i <= 'v'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
            case '9':
                for(char i = 'w'; i <= 'z'; i++) {
                    s += i;
                    reccursiveMethod(index + 1, digits);
                    s.pop_back();
                }
                break;
        }
    }

    vector<string> letterCombinations(string digits) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        reccursiveMethod(0, digits);
        return result;
    }
};