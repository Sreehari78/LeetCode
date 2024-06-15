class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int res = 0;

        for (int it : nums)
            s.insert(it);

        for (int it : s)
            if (s.find(it - 1) == s.end()) {
                int count = 1, x = it;
                while (s.find(x + 1) != s.end()) {
                    x++;
                    count++;
                }
                res = max(res, count);
            }

        return res;
    }
};