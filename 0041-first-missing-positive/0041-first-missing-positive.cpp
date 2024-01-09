class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> v(100000, false);
        for (auto it : nums)
            if (it > 0 && it <= 100000)
                v[it] = true;

        for (int i = 1; i <= 100000; i++)
            if (!v[i])
                return i;

        return 100001;
    }
};