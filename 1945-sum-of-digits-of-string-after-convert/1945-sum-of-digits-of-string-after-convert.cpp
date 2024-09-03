class Solution {
public:
    int getLucky(string s, int k) {
        string str = "";
        int sum = 0;

        for(char it: s)
            str += to_string(it - 'a' + 1);
        
        for(int i = 0; i < k; i++) {
            int temp = 0;

            for(char it: str)
                temp += it - '0';
            
            str = to_string(temp);
            sum = temp;
        }

        return sum;
    }
};