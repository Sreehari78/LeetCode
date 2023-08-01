class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        for(int i = 0; i<s.length(); i++)
        {
            char symbol = s[i];

            switch(symbol)
            {
                case 'I':
                    if((i+1)<s.length() && (s[i+1] == 'V' || s[i+1] == 'X'))
                    {
                        number -= 1;
                    }
                    else
                    {
                        number += 1;
                    }
                    break;
                case 'V':
                    number += 5;
                    break;
                case 'X':
                    if((i+1)<s.length() && (s[i+1] == 'L' || s[i+1] == 'C'))
                    {
                        number -= 10;
                    }
                    else
                    {
                        number += 10;
                    }
                    break;
                case 'L':
                    number += 50;
                    break;
                case 'C':
                    if((i+1)<s.length() && (s[i+1] == 'D' || s[i+1] == 'M'))
                    {
                        number -= 100;
                    }
                    else
                    {
                        number += 100;
                    }
                    break;
                case 'D':
                    number += 500;
                    break;
                case 'M':
                    number += 1000;
                    break;
                        
            }
        }

        return number;
    }
};