class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int n = nums.size(), a = 0, b = 0, c = INT_MAX, d = INT_MAX;
        for(auto it: nums) {
            if(it > a) {
                b = a;
                a = it;
            }
            else b = max(it, b);
            
            if(it < c){
                d = c;
                c = it;
            }
            else {
                d = min(it, d);
            }
        }

        return a*b - c*d;
    }
};