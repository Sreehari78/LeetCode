class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums;
        unordered_map<int, int> mp;
        int rank = 1;

        for(int it: arr) {
            nums.push_back(it);
            mp[it] = 1;
        }

        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < nums.size(); i++)
            if(nums[i - 1] == nums[i])
                mp[nums[i]] = rank;
            else mp[nums[i]] = ++rank;
        
        for(int i = 0; i < arr.size(); i++)
            arr[i] = mp[arr[i]];

        return arr;
    }
};

static const auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();