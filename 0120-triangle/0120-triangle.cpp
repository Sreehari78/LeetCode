class Solution {
public:

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> prev(n, 0);

        for(int j = 0; j < n; j++) prev[j] = triangle[n - 1][j];

        for(int i = n - 2; i >= 0; i--) {
            vector<int> curr(n, 0);

            for(int j = i; j >= 0; j--)
                    if(i == n - 1) return triangle[i][j];
                    else {
                        int down = triangle[i][j] + prev[j];
                        int rightDown = triangle[i][j] + prev[j + 1];
                        curr[j] = min(down, rightDown);
                    }
            prev = curr;
        }
	
	    return prev[0];
    }
};