class Solution {
public:
    static bool compareByValue(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    }

    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        vector<pair<int, int>> pairs;

        for (int i = 0; i < n; i++) {
            int x = arr[i];
            int count = 0;
            while (x) {
                count += x & 1;
                x >>= 1;
            }
            mp[arr[i]] = count;
            pairs.push_back({arr[i], count});
        }
        
        sort(pairs.begin(), pairs.end(), compareByValue);
        
        vector<int> result;
        for(auto it: pairs) 
            result.push_back(it.first);
        return result;
    }
};