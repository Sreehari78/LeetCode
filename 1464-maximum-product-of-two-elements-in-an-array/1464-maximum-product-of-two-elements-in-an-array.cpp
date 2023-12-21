class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), prod = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 1; i++) prod = max(prod, (nums[i] - 1) * (nums[i + 1] - 1));
        return prod;
    }
};