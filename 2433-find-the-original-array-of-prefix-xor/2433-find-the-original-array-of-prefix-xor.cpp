class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = pref.size();
        vector<int> result;
        result.push_back(pref[0]);
        for(int i = 1; i < n; i++) result.push_back(pref[i - 1] ^ pref[i]);

        return result;
    }
};