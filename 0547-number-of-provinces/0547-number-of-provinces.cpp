class Solution {
public:
    int n;

    void dfs(int u, vector<bool>& visited, vector<vector<int>>& isConnected) {
        if(visited[u])
            return;
        
        visited[u] = true;

        for(int i = 0; i < n; i++)
            if(isConnected[u][i] == 1)
                dfs(i, visited, isConnected);
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int res = 0;
        n = isConnected.size();
        vector<bool> visited(n, false);

        for(int i = 0; i < n; i++)
            if(!visited[i]) {
                dfs(i, visited, isConnected);
                res++;
            }
        
        return res;
    }
};