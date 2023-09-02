class Solution {
public:
    int maxProduct(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int prefix=1, suffix=1, n = nums.size(), maxi=INT_MIN;
        for(int i = 0; i < nums.size();i++)
        {
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;

            prefix*=nums[i];
            suffix*=nums[n-i-1];
            maxi=max(maxi , max(suffix,prefix));
        }

        return maxi;
    }
};