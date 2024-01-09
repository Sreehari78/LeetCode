class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int firstMissingPositive(vector<int>& nums) {
        // vector<bool> v(100000, false);
        // int maxi = INT_MIN;

        // for (auto it : nums) {
        //     if (it > 0 && it <= 100000)
        //         v[it] = true;
        //     maxi = max(it, maxi);
        // }

        // for (int i = 1; i <= maxi; i++)
        //     if (!v[i])
        //         return i;

        // if(maxi < 0) return 1;
        // return ++maxi;

        for(int i = 0; i < nums.size(); i++)
            if (nums[i] < 1)
                nums[i] == 0;
            
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > 0 && nums[i] < nums.size()) nums[nums[i]] *= -1;
        
        for(int i = 1; i < nums.size(); i++)
            if(nums[i] > 0) return i;

         return nums.size() + 1;
    }
};