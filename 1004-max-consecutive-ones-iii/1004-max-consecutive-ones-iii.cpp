class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        int left = 0, right = 0, flip = k, res = 0, zeros = 0;
        for (int i : nums)
            if (i == 0)
                zeros++;

        if (!zeros || zeros <= k)
            return nums.size();

        if (k == 0) {
            while (right < nums.size() && left <= right) {
                while (left < nums.size() && nums[left] == 0)
                    left++;
                right = left;
                while (right < nums.size() && nums[right] == 1)
                    right++;
                res = max(res, right - left);
                left = ++right;
            }
            return res;
        }

        while (right < nums.size() && left <= right) {
            while (right < nums.size() && nums[right] == 1 || flip--)
                right++;
            flip++;
            res = max(res, right - left);

            while (!flip)
                if (nums[left++] == 0)
                    flip++;
        }

        return res;
    }
};