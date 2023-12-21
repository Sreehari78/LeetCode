class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {

        int n = points.size(), diff = 0;
        vector<int> v;

        for(int i = 0; i < n; i++) v.push_back(points[i][0]);
        sort(v.begin(), v.end());

        for(int i = 0; i < n - 1; i++) if(v[i] != v[i + 1]) diff = max(diff, v[i + 1] - v[i]);
        return diff;
    }
};