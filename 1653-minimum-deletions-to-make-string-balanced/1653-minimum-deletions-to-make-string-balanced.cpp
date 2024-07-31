class Solution {
public:
    int minimumDeletions(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int prefix = 0, suffix = 0, res = INT_MAX;

        for (int i = 1; i < s.length(); i++)
            if (s[i] == 'a')
                suffix++;

        res = min(res, prefix + suffix);

        for (int i = 1; i < s.length(); i++) {
            if (s[i - 1] == 'b')
                prefix++;

            if (s[i] == 'a')
                suffix--;

            res = min(res, prefix + suffix);
        }

        return res;
    }
};