class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    bool isPathCrossing(string path) {
        unordered_set<string> visitedPoints;
        int currentX = 0, currentY = 0;
        visitedPoints.insert(to_string(currentX) + "," + to_string(currentY));
        
        for (auto direction : path) {
            if (direction == 'N') ++currentY;
            else if (direction == 'S') --currentY;
            else if (direction == 'E') ++currentX;
            else --currentX;
            
            if (visitedPoints.count(to_string(currentX) + "," + to_string(currentY))) {
                return true;
            }
            
            visitedPoints.insert(to_string(currentX) + "," + to_string(currentY));
        }
        
        return false;
    }
};