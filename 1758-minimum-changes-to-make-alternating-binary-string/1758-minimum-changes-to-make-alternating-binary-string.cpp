class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int minOperations(string s) {
        int n = s.length(), c1 = 0, c2 = 0;
        string str1 = "", str2 = "";

        for(int i = 0; i < n; i++)
            if(i % 2 == 0) {
                str1 += '0';
                str2 += '1';
            }
            else {
                str1 += '1';
                str2 += '0';
            }

        for(int i = 0; i < n; i++) {
            if(str1[i] != s[i]) c1++;
            if(str2[i] != s[i]) c2++;
        }

        return min(c1, c2);
    }

};