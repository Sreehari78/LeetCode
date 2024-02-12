class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        unordered_map<int, int> mp;

        for (int it : nums) {
            mp[it]++;
            if (mp[it] > nums.size() / 2) return it;
        }
        return -1;
    }
};