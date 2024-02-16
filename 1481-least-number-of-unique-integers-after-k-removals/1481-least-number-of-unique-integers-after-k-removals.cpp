
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        unordered_map<int, int> mp;
        for (auto i : arr) mp[i]++;

        int n = mp.size(), j = 0;
        vector<pair<int, int>> temp(mp.begin(), mp.end());

        sort(temp.begin(), temp.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.second < b.second;
            });

        while (k > 0) {
            while (temp[j].second > 0 && k-- > 0) temp[j].second--;
            if (temp[j].second == 0) {
                j++;
                n--;
            }
        }
        return n;
    }
};