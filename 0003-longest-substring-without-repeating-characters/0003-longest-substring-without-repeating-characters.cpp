class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int left = 0, right = 0, n = s.length(), result = 0;
        unordered_map<char, int>mp;

        while(right < n) {
            if(mp[s[right]] != 0) {
                result = max(result, right - left);
                mp[s[left++]]--;
            }
            else mp[s[right++]]++;
        }
        
        result = max(result, right - left);
        return result;
    }
};