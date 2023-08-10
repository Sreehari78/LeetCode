#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // int start = 0, mid = 0, end = nums.size()-1;
        // while(start <= end){
        //     mid = (start + end)/2;
        //     if(nums[mid] == target) return true;
        //     if(nums[start] == target) return true;
        //     if(nums[end] == target) return true;
        //     if(nums[mid]==nums[start]&&nums[mid]==nums[end])
        //     {
        //     }
        //     if(nums[mid] > nums[start]){
        //         if(target < nums[mid] && target >= nums[start])
        //             return binary_search(nums.begin()+start,nums.begin()+mid,target);
        //         else
        //             start = mid + 1;
        //     }
        //     else{
        //         if(target > nums[mid] && target <= nums[end])
        //             return binary_search(nums.begin()+mid+1,nums.begin()+end,target);
        //         else
        //             end = mid -1;
        //     }
        // }
        // return false;
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