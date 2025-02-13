class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), freshOranges = 0, res = 0;
        queue<pair<int, int>> q;
        vector<vector<int>> visited = grid;
        vector<pair<int, int>> dirs = {{1, 0},{-1, 0},{0, -1},{0, 1}};


        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(grid[i][j] == 2)
                        q.push({i, j});
                else if(grid[i][j] == 1)
                    freshOranges++;
                   
        if(freshOranges == 0)
            return 0;

        if(q.empty())
            return -1;
        
        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                auto [x, y] = q.front();
                q.pop();
                for(auto [dx, dy]: dirs) {
                    int i = x + dx, j = y + dy;
                    if(i > -1 && i < n && j > -1 && j < m && visited[i][j] == 1) {
                        visited[i][j] = 2;
                        freshOranges--;
                        q.push({i, j});
                    }
                }
            }
            res++;
        }

        return freshOranges > 0 ? -1 : --res;
    }
};