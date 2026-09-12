class Solution {
public:
    int countRotations(string s, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int res = 0, n = s.length();

        for (int i = 0; i < n; i++) {
            int score = 0;

            for (int i = 1; i < s.length(); i++)
                if (s[i - 1] == s[i])
                    score++;

            if (score == k)
                res++;
            
            char prev = s[0];
            s.erase(0,1);
            s.push_back(prev);
        }

        return res;
    }
};