class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<int, int> mp1, mp2, mp3;
        vector<int> result, large;

        for(int i = 0; i < nums1.size() || i < nums2.size(); i++) {
            if(i < nums1.size()) mp1[nums1[i]]++;
            if(i < nums2.size()) mp2[nums2[i]]++;
        }

        (nums1.size() >= nums2.size()) ? large = nums1 : large = nums2;

        for(int i = 0; i < nums1.size() || i < nums2.size(); i++)
            if(mp1[large[i]] > 0 && mp2[large[i]] > 0) 
                for(int j = 0; j < min(mp1[large[i]], mp2[large[i]]) && mp3[large[i]] < min(mp1[large[i]], mp2[large[i]]); j++) {
                    result.push_back(large[i]);
                    mp3[large[i]]++;
                }

        return result;
    }
};
