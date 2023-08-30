class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1) return s;

        int n = s.length(), j = 2 * (numRows - 1);
        string str = "";

        for(int r = 0; r < numRows; r++) {
            for(int i = r; i < n; i += j) {
                str += s[i];

                if(r > 0 && r < numRows - 1 && i + j - 2*r < n) str += s[i + j - 2*r];
            }
        }
        return str;   
    }
};
