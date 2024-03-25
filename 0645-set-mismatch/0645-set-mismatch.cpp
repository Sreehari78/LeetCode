int speedUp = [] {
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int repeat, missing;

        for (int it : nums) {
            int x = abs(it);
            if (nums[x - 1] < 0)
                repeat = abs(it);
            else
                nums[x - 1] *= -1;
        }

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] > 0)
                missing = i + 1;

        return {repeat, missing};
    }
};