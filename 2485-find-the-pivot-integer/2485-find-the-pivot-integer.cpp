class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;

        unordered_map<int, pair<int,int>> mp;
        int left = 1, right = n, sum = 0;

        for(int x = 1; x <= n; x++) {
            sum += x;
            mp[x].first = sum;
        }
        sum = 0;
        for(int x = n; x > 0; x--) {
            sum += x;
            mp[x].second =sum;
        }

        for(auto it: mp) if(it.second.first == it.second.second)return it.first;

        return -1;
                

    }
};