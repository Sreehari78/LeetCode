#pragma GCC optimize("O3", "unroll-loops")

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long left = 0, n = nums.size(), maxi = *max_element(nums.begin(), nums.end()), count = 0, ans = 0;

        for(int right = 0; right < n; right++) {
            if(nums[right] == maxi)
                count++;

            while(count >= k)
                if(nums[left++] == maxi)
                    count--;
            
            ans += left;
            
        }

        return ans;
    }
};