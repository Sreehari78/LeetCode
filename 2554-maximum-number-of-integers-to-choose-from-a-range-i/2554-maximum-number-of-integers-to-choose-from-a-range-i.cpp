static int speedup = []() { ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        array<bool, 10001> arr{false};
        for (int n : banned)
            arr[n] = true;

        int result = 0;
        for (int i = 1; i <= n && i <= maxSum; i++)
            if (!arr[i]) {
                ++result;
                maxSum -= i;
            }

        return result;
    }
};
