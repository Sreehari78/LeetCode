class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()== 1) return nums[0];
        sort(nums.begin(), nums.end());
        for(int it: nums) cout<< it << " ";
        cout<<endl;
        int count = 1;
        for(int i = 1; i < nums.size(); i++) {
           
            if(nums[i] == nums[i - 1]) {
                count++;
                if(count > nums.size() / 2) return nums[i - 1];
            }
            else count = 1;
            cout<< count << " ";
        }
        
        return -1;
    }
};