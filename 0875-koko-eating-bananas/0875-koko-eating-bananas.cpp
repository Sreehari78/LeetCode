class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        cout.tie(0);
        cin.tie(0);
        ios_base::sync_with_stdio(0);
        
        long long min_res = 0;
        min_res = *max_element(piles.begin(), piles.end());
        long long left = 1, right = min_res, per_hour;

        while(left <= right){
            per_hour = (left+right)/2;
            long long hours_to_eat = 0;

            for(int& val : piles){
                if(val%per_hour==0)
                    hours_to_eat += val/per_hour;            
                else
                hours_to_eat += val/per_hour+1;
            }   

            if(hours_to_eat <= h){
                min_res = min(min_res,per_hour);
                right = per_hour-1; 
            }
            else
                left = per_hour+1;
        }
        return min_res;
    }
};