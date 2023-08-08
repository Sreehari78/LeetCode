class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        if(nums.size() < 1 || val > 50) return nums.size();

        int count = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){ 
                nums[i] = 101;
                count--;
            }
        }

        sort(nums.begin(), nums.end());
        
        return count;

    }
};
