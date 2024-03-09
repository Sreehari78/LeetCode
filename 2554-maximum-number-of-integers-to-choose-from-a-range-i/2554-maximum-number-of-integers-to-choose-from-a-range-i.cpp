class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int, int> mp;
        int sum = 0, count = 0;

        for (int it : banned)
            mp[it] = 1;

        for (int i = 1; i <= n; i++)
            if (mp[i] == 1)
                continue;
            else if (sum + i <= maxSum) {
                sum += i;
                count++;
            } else
                break;

        return count;
    }
};
