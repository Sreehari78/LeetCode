class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = INT_MIN, high = 0, mid = 0, capacity = INT_MAX;

        for(auto it: weights) {
            high += it;
            low = max(low, it);
        }

        while(low <= high) {
            mid = (low + high) / 2;
            int load = 0, day = 1;

            for(auto it: weights) {
                load += it;
                if(load > mid) {
                    day++;
                    load = it;
                }
            }

            if(day > days) low = mid + 1;
            else {
                high = mid - 1;
                capacity = min(capacity, mid);
            }
        }

        return capacity;
    }
};