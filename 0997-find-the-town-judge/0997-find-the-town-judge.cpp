class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> count(n + 1, 0);

        for (auto& t : trust) count[t[0]]--, count[t[1]]++;
        for (int i = 1; i <= n; ++i) if (count[i] == n - 1) return i;

        return -1;
    }
};
