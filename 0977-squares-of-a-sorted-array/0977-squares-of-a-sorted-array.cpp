class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int n = nums.size();
        priority_queue<int, vector<int>, greater<>> pq;
        vector<int> sorted(n, -1);

        for (int i = 0; i < n; i++) pq.push(nums[i] * nums[i]);
        for (int i = 0; i < n; i++) {
            sorted[i] = pq.top();
            pq.pop();
        }



        return sorted;
    }
};