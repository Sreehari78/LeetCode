class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> sumToIndex;
        int maxLen = 0;
        int sum = 0;

        sumToIndex[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i] == 0 ? -1 : 1;

            if (sumToIndex.find(sum) != sumToIndex.end())
                maxLen = max(maxLen, i - sumToIndex[sum]);
            else
                sumToIndex[sum] = i;
        }

        return maxLen;
    }
};