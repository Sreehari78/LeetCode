int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

class Solution {
public:
    unordered_map<int, int> memo;
    int reccursiveMethod(vector<int>& nums, int index) {
        if(index >= nums.size()) {
            return 0;
        }
        
        if(memo.find(index) != memo.end()) return memo[index];

        int robCurrentHouse = nums[index] + reccursiveMethod(nums, index + 2);
        int skipCurrentHouse = reccursiveMethod(nums, index + 1);
        memo[index] = max(robCurrentHouse, skipCurrentHouse);
        return memo[index];
    }

    int rob(vector<int>& nums) {
        return reccursiveMethod(nums, 0);
    }
};