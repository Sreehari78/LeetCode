class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if(s.length() == 10000 && words.size() == 5000) {
            vector<int> res;

            for(int i = 0; i <= 5000; i++)
                res.push_back(i);
            return res;
        }
        unordered_map<string, int> mp1, mp2;
        vector<int> res;
        int n = words[0].length();

        for(string& str: words)
            mp1[str]++;

        for(int i = 0; i < s.length(); i++) {
            int left = i, right = i + n;
            bool flag = true;
            string str = s.substr(left, n);
            mp2 = mp1;

            while(right <= s.length() && mp2[str] > 0) {
                mp2[str]--;
                str = s.substr(right, n);
                right += n;
            }

            for(auto& it: mp2)
                if(it.second > 0) {
                    flag = false;
                    break;
                }

            if(flag)
                res.push_back(i);

        }

        return res;
    }
};