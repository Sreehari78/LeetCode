class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        int left = 0, right = 0, res = 1;
        unordered_map<int, int> mp;

        while(right < s.length() && left <= right) {
            mp[s[right]]++;
            while(mp[s[right]] == 2) mp[s[left++]]--;
            right++;
            res = max(res, right - left);
        }

        return res;
    }
};