class Solution {
public:
    string intToRoman(int num) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        string s = "";
        char ones, fives, tens;
        int pow = 1;
        stack<char> st;

        while(num)
        {
            int temp = num % 10;
            num /= 10;
            
            switch(pow) {
                case 1:  
                    ones = 'I';
                    fives = 'V';
                    tens = 'X';
                    break;
                case 2:  
                    ones = 'X';
                    fives = 'L';
                    tens = 'C';
                    break;
                case 3:  
                    ones = 'C';
                    fives = 'D';
                    tens = 'M';
                    break;
                default:
                    ones = 'M';
            }

            switch(temp)
            {
                case 0:
                    break;
                case 1:
                    st.push(ones);
                    break;
                case 2:
                    st.push(ones);
                    st.push(ones);
                    break;
                case 3:
                    st.push(ones);
                    st.push(ones);
                    st.push(ones);
                    break;
                case 4:
                    st.push(fives);
                    st.push(ones);
                    break;
                case 5:
                    st.push(fives);
                    break;
                case 6:
                    st.push(ones);
                    st.push(fives);
                    break;
                case 7:
                    st.push(ones);
                    st.push(ones);
                    st.push(fives);
                    break;
                case 8:
                    st.push(ones);
                    st.push(ones);
                    st.push(ones);
                    st.push(fives);
                    break;
                case 9:
                    st.push(tens);
                    st.push(ones);
                    break;                     
            }

            pow++;
        }

        while(st.empty() != 1) {
            s += st.top();
            st.pop();
        }

        return s;
    }
};