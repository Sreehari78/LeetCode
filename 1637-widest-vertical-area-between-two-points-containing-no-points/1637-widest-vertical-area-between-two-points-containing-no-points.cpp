class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int start = 0, end = 1000000000 , n = points.size(), diff = 0;
        vector<int> v;

        for(int i = 0; i < n; i++) v.push_back(points[i][0]);
        sort(v.begin(), v.end());

        for(int i = 0; i < n - 1; i++) if(v[i] != v[i + 1]) diff = max(diff, v[i + 1] - v[i]);
        return diff;
    }
};