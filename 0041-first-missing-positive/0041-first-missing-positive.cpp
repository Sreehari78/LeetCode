int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> v(100000, false);
        int maxi = INT_MIN;

        for (auto it : nums) {
            if (it > 0 && it <= 100000)
                v[it] = true;
            maxi = max(it, maxi);
        }

        for (int i = 1; i <= nums.size(); i++)
            if (!v[i])
                return i;

        if (maxi < 0)
            return 1;
        return ++maxi;
        // int id;
        // for (int i = 0; i < nums.size(); i++)
        //     if (nums[i] <= 0 || nums[i] > nums.size())
        //         nums[i] = nums.size() + 1;

        // for (int i = 0; i < nums.size(); i++) {
        //     id = abs(nums[i]);
        //     if(id > nums.size()) continue;
        //     id--;
        //     if(nums[id] > 0) nums[id] = -nums[id];
        // }

        // for(int i = 0; i < nums.size(); i++)
        //     if(nums[i] > 0) return i + 1;

        // return nums.size() + 1;
    }
};