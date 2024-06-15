class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int res = 0;

        for (int it : nums)
            s.insert(it);

        for (int it : s)
            if (s.find(it - 1) == s.end()) {
                int count = 1, x = it;
                while (s.find(x + 1) != s.end()) {
                    x++;
                    count++;
                }
                res = max(res, count);
            }

        return res;
        // if(nums.size() == 0) return 0;
        // sort(nums.begin(), nums.end());
        // int lastSmall = nums[0], count = 1, res = 1;

        // for (int i = 1; i < nums.size(); i++) {
        //     if (lastSmall + 1 == nums[i])
        //         count++;
        //     else if (lastSmall != nums[i])
        //         count = 1;
        //     res = max(res, count);
        //     lastSmall = nums[i];
        // }
        // return res;
    }
};