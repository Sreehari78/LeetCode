class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map <int, int> mp;
        vector <int> v;

        for(int it: nums1) if(mp[it] == 0)mp[it]++;
        for(int it: nums2) if (mp[it] == 1) {
            v.push_back(it);
            mp[it] += 2;
        }

        return v;
    }
};
