class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int currentFloor = 0, res = 0;
        
        for(int request : requests) {
            res += abs(currentFloor - request);
            currentFloor = request;
        }

        return res;
    }
};