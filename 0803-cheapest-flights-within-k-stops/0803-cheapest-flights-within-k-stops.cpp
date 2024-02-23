class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<int> cost(n, INT_MAX);
        cost[src] = 0;

        for(int i = 0; i < k + 1; i++) {
            vector<int> tempCost = cost;
            for(auto &it : flights) {
                int s = it[0], d = it[1], c = it[2];
                if(cost[s] == INT_MAX) continue;
                if(cost[s] + c < tempCost[d]) tempCost[d] = cost[s] + c;
            }
            cost = tempCost;
        }
        return cost[dst] == INT_MAX ? -1 : cost[dst];
    }
};