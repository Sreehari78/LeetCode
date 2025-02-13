class Solution {
public:
    vector<bool> visited;
    int cities;

    // void dfs(int u, vector<vector<int>>& isConnected) {
    //     if(visited[u])
    //         return;
        
    //     visited[u] = true;

    //     for(int city = 0; city < cities; city++)
    //         if(isConnected[u][city] && !visited[city])
    //             dfs(city, isConnected);
    // }

    int bfs(vector<vector<int>>& isConnected) {
        int provinces = 0;
        queue<int> q;

        for(int i = 0; i < cities; i++) {
            if(!visited[i]) {
                q.push(i);
                provinces++;
            }
            while(!q.empty()) {
                int u = q.front();
                q.pop();

                for(int city = 0; city < cities; city++)
                    if(isConnected[u][city] && !visited[city]) {
                        visited[city] = true;
                        q.push(city);
                    }
            }
        }

        return provinces;
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinces = 0;
        cities = isConnected.size();
        visited.resize(cities, false);

        // for(int city = 0; city < cities; city++)
        //     if(!visited[city]) {
        //         provinces++;
        //         dfs(city, isConnected);
        //     }

        provinces = bfs(isConnected);
        
        return provinces;
    }
};