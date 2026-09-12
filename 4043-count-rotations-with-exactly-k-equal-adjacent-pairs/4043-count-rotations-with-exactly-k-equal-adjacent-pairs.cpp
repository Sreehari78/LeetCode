class Solution {
public:
    int countRotations(string s, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

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