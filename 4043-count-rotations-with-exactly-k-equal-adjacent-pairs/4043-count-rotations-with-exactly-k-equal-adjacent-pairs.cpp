class Solution {
public:
    int countRotations(string s, int k) {
        int res = 0; 

        for(int i = 0; i < s.length(); i++) {
            int score = 0;
            char prev = s[0];

            for(int i = 1; i < s.length(); i++) {
                if(prev == s[i]) score++;
                prev = s[i];
            }

            if(score == k) res++;
            rotate(s.begin(), s.begin() + 1, s.end());
        }
        return res;
    }
};