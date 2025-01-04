class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int left = 0; left < nums.size(); left++) {

            if(left > 0 && nums[left] == nums[left - 1]) continue;
            int mid = left + 1, right = nums.size() - 1;;

            while(right > mid) {
                int sum = nums[left] + nums[mid] + nums[right];

                if (sum < 0) mid++;
                else if (sum > 0) right--;
                else {
                    res.push_back({nums[left], nums[mid++], nums[right--]});
                    while(right > mid && nums[mid] == nums[mid - 1]) mid++;
                    while(right > mid && nums[right] == nums[right + 1]) right--;
                }
            }
        }

        return res;
    }
};