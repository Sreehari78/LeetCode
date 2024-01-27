class Solution {
public:

    int maximumNonAdjacentSum(vector<int> &nums){

        int prevFirst = 0;
        int prevSecond = 0;

        for(int i = 0; i < nums.size(); i++) {
            int temp = prevFirst;
            prevFirst = max(prevSecond + nums[i], prevFirst);
            prevSecond = temp;
        }

        return prevFirst;
    }

    int rob(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        if(nums.size() == 1) return nums[0];

        vector<int> arr1, arr2;
        for(int i = 0; i < nums.size() - 1; i++) arr1.push_back(nums[i]);
        for(int i = 1; i < nums.size(); i++) arr2.push_back(nums[i]);

        int result1 = maximumNonAdjacentSum(arr1);
        int result2 = maximumNonAdjacentSum(arr2);
        return max(result1, result2);
    }
};