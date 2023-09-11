class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<int> nums3;
        int i = 0, j = 0;

        while(nums3.size() < m + n) {
                if(i < m && j < n) {
                    if(nums1[i] < nums2[j]) nums3.push_back(nums1[i++]);
                    else nums3.push_back(nums2[j++]);
                }
                else if(i < m) nums3.push_back(nums1[i++]);
                else nums3.push_back(nums2[j++]);
        }

        nums1 = nums3;
    }
};