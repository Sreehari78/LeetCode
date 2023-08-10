class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, mid = 0, end = nums.size()-1;

        while(start <= end){
            mid = (start + end)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target)  end = mid - 1;
            if(nums[mid] < target) start = mid + 1;
        }
        
        if(nums[mid] < target) return mid+1;
        return mid;
    }
};
