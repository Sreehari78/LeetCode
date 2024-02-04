class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        // if(s.length() < 10) return {};

        vector<string> result;
        unordered_map<string, int> mp;

        int left = 0, right = 9, n = s.length();

        while(right < n) {
            string str = s.substr(left, right - left + 1);
            if(mp[str] == 1) result.push_back(str);
            mp[str]++;
            right++;
            left++;
        }

        return result;
    }
};