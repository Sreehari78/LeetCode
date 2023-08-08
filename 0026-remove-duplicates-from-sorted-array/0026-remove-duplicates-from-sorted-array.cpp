class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int highest = -101, count = 0, n = nums.size();

        if(n == 1) return 1;

        for(int i = 0; i < n; i++){
            if(nums[i] > highest){
                highest = nums[i];
                nums[count++] = nums[i];
            }
        }

        return count;
    }
};
