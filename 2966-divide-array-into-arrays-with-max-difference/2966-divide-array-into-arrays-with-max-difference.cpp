class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();

        int s = n / 3;
        vector<vector<int>> result(s, vector<int>(3, 0));
        sort(nums.begin(), nums.end());

        int l = 0, r = 1, row = 0, col = 0;
        result[row][col++] = nums[0];

        while(r < n && l <= r) {

            if(nums[r] - nums[l] <= k) {
                if(col == 2) {
                    result[row++][col++] = nums[r];
                    col = 0;
                    l = r + 1;
                    if(l < n) result[row][col++] = nums[l];
                    r = l + 1;
                }
                else result[row][col++] = nums[r++]; 
            }
            else return {};
        }

        return result;
    }
};