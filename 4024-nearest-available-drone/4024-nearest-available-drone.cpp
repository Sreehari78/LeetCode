class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int res = -1, mini = INT_MAX;
        
        for(int i = 0; i < drones.size(); i++) {
            int distance = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);

            if(drones[i][2] >= distance)
                if(mini > distance) {
                    mini = distance;
                    res = i;
                }
        }

        return (res == INT_MAX)? -1: res;
    }
};