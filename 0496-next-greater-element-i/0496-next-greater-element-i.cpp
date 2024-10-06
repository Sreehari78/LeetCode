class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n = nums1.size(), m = nums2.size();
        vector<int> res(n, -1);
        unordered_map<int, int> mp;
        st.push(nums2[m - 1]);

        for(int i = m - 2; i > -1; i--) {
            while(!st.empty() && st.top() < nums2[i])
                st.pop();
            
            if(!st.empty())
                mp[nums2[i]] = st.top();
            
            st.push(nums2[i]);
        }

        for(int i = 0; i < n; i++)
            if(mp[nums1[i]])
                res[i] = mp[nums1[i]];
        
        return res;
    }
};