class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int maxScore(string s) {
        int zeros = 0, ones = count(s.begin(), s.end(), '1'), score = 0, count = 0, n = s.length();

        for(int i = 0; i < n - 1; i++) {
            zeros += (s[i] == '0');
            ones -= (s[i] == '1');
            score = max(score, zeros + ones);
        }
        return score;
    }
};