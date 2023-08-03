class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {    
        map<int,int> nMap;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];

            if(nMap.find(complement) != nMap.end()) return{nMap[complement], i};
            nMap[nums[i]] = i;
        }

        return{};
    }
};