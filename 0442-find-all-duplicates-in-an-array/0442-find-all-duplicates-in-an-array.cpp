class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
            nums[(nums[i] - 1) % nums.size()] += nums.size();

        for (int i = 0; i < nums.size(); i++)
            if ((nums[i] - 1) / nums.size() > 1)
                res.push_back(i + 1);

        return res;
    }
};