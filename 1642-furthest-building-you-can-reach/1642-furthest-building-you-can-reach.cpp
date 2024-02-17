class Solution {
public:
    bool can_reach(vector<int> &heights, int bricks, int ladders, int target){
        vector<int> jumps;

        for(int i = 0; i < target; i++){
            int diff = heights[i + 1] - heights[i];
            if(diff > 0) jumps.push_back(diff);
        }
        
        if(jumps.size() <= ladders) return true;
        
        sort(jumps.begin(), jumps.end());

        int jumps_made_using_bricks = jumps.size() - ladders;
        int bricks_needed = accumulate(jumps.begin(), jumps.begin() + jumps_made_using_bricks, 0);

        if(bricks_needed <= bricks) return true;
        return false;
    }

    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int start = 0, end = heights.size() - 1;

        while(start <= end) {
            int mid = (start + end) / 2;
            if(mid == end) return mid;

            bool can_reach_mid = can_reach(heights, bricks, ladders, mid);
            bool can_reach_after_mid = can_reach(heights, bricks, ladders, mid+1);

            if(can_reach_mid && !can_reach_after_mid) return mid;
            else if(can_reach_after_mid) start = mid + 1;
            else end = mid - 1;
        }

        return start;        
    }
};