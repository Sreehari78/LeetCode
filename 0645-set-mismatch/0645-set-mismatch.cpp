int speedUp = [] { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> H(nums.size() + 1, 0);
        H[0] = 1;
        for (auto &v: nums) {
            H[v]++;
        }
        int d = max_element(H.begin(), H.end()) - H.begin();
        int m = min_element(H.begin()+1, H.end()) - H.begin();
        return {d, m};
    }
};