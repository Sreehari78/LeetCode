class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 23, 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789, 1234, 2345, 3456, 4567, 5678, 6789, 12345, 23456, 34567, 45678, 56789, 123456, 234567, 345678, 456789, 1234567, 2345678, 3456789, 12345678, 23456789, 123456789};
        vector<int> result;
        int start = 0, end = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < low) start = i;
            if(nums[i] <= high) end = i;
        }
        
        while(++start <= end) result.push_back(nums[start]);

        return result;

    }
};