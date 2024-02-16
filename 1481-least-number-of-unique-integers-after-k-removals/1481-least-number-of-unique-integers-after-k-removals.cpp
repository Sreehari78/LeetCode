class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int it: arr) mp[it]++;

        vector<int> freq;
        for(auto it: mp) freq.push_back(it.second);
        int n = freq.size();

        sort(freq.begin(), freq.end());

        for(int i = 0; i < n; i++) {
            k -= freq[i];
            if(k == 0) return n - i - 1;
            else if(k < 0) return n - i;
        }
        return -1;
    }
};