class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        while(j < nums.size()) {
            while(i < nums.size() && nums[i] == 0) i++;
            if(i != nums.size()) swap(nums[j], nums[i]);
            j++;
            i = j;
        }
    }
};