class Solution {
public:
    int minimumDeletions(string s) {
        int prefix = 0, suffix = 0, res = INT_MAX;
        if (s.length() == 1)
            return 0;

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