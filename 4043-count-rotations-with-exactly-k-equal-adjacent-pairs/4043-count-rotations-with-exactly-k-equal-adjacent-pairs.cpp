class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    int countRotations(string s, int k) {
        int res = 0, n = s.length();

        for (int i = 0; i < n; i++) {
            int score = 0;

            for (int i = 1; i < s.length(); i++)
                if (s[i - 1] == s[i])
                    score++;

            if (score == k)
                res++;
            
            char rotate = s[0];
            s.erase(0,1);
            s.push_back(rotate);
        }

        return res;
    }
};