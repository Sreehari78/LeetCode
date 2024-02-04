class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size(), left = 0, right = 1;
        if(n == 1) return 1;
        string str = "";

        while(right <= n) {
            str += chars[left];
            while(right < n && chars[left] == chars[right]) right++;
            if(right - left > 1) str += to_string(right - left);
            cout<<str<< " "<<right<<endl;

            left = right;
            right++;

        }

        for(int i = 0; i < str.length(); i++) chars[i] = str[i];

        return str.length();
    }
};