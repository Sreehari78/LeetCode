#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        return newSearch(nums,target,0,nums.size()-1);
 
    }
    bool newSearch(vector<int>& nums, int target,int start,int end)
    {
        int mid=start+(end-start)/2;
        if(start>end) return false;
        if(nums[mid] == target) return true;
        if(nums[start] == target) return true;
        if(nums[end] == target) return true;
        if(nums[mid]==nums[start]||nums[mid]==nums[end])
        {
            if(!newSearch(nums,target,start,mid-1))
                return newSearch(nums,target,mid + 1,end);
            return true;
        }
        if(nums[mid] > nums[start]){
            if(target < nums[mid] && target >= nums[start])
                return binary_search(nums.begin()+start,nums.begin()+mid,target);
            else
                return newSearch(nums,target,mid + 1,end);
            }
        else{
            if(target > nums[mid] && target <= nums[end])
                return binary_search(nums.begin()+mid+1,nums.begin()+end,target);
            else
                return newSearch(nums,target,start,mid-1);
            }
    }
};
