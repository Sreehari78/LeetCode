class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length(), m = str2.length(), gcd = -1;
        string str = "";

        (n < m)? gcd = __gcd(m, n): gcd = __gcd(n, m);

        if(gcd == 0 || str1[0] != str2[0]) return "";

        for(int i = 0; i < gcd; i++)
            if(str1[i] == str2[i]) str += str1[i];
            else break;
        
        int k = 0;
        for(int i = gcd; i < n; i++)
        {
            if(k == gcd) k = 0;
            if(str1[i] != str[k]) return "";
            k++;
        }

        k = 0;
        for(int i = gcd; i < m; i++)
        {
            if(k == gcd) k = 0;
            if(str2[i] != str[k]) return "";
            k++;
        }
       
        return str;    
    }
};
