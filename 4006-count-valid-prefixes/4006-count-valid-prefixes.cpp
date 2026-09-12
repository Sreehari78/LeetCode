class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    
    int countValidPrefixes(string s) {
        int zeros = 0, ones = 0, res = 0;
        for(int i = 0; i < s.length(); i++) {
            (s[i] == '0')? zeros++: ones++;

            if((zeros - ones) >= -1 && (zeros - ones <= 1)) res++;
        }

        return res;
    }
};