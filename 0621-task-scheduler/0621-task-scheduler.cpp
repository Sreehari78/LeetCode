class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int freq[26] = {0};

        for (char task : tasks)
            freq[task - 'A']++;

        sort(begin(freq), end(freq));
        int chunk = freq[25] - 1;
        int idel = chunk * n;

        for (int i = 24; i >= 0; i--)
            idel -= min(chunk, freq[i]);

        return idel < 0 ? tasks.size() : tasks.size() + idel;
    }
};