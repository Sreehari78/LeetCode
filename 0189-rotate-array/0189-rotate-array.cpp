class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        if(nums.size() == 1 || k % nums.size() == 0) return;

        k %= nums.size();
        vector<int> v, res;
        int n = nums.size(), count = 0, l = 0, r = nums.size() - 1;
    
        while(count++ < k)
            v.push_back(nums[r--]);

        for(int it: v) cout<< it << " ";
        
        count = 0;
        while(count < n) {
            if(count < k) res.push_back(v[v.size() - count - 1]);
            else res.push_back(nums[l++]);
            count++;
        }
        nums = res;
    }
};