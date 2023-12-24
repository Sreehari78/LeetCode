class Solution {
private:
    int n;

public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    bool isPalindrome(int start, int end, string s) {
        while(start <= end) if(s[start++] != s[end--]) return false;
        return true;
    }

    void reccursiveMethod(int index, string s, vector<string>& ans, vector<vector<string>>& res) {
        if(index == n) {
            res.push_back(ans);
            return;
        }

        for(int i = index; i < n; i++)  {
            if(isPalindrome(index, i, s)) {
                ans.push_back(s.substr(index, i - index + 1));
                reccursiveMethod(i + 1, s, ans, res);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ans;

        n = s.length();
        reccursiveMethod(0, s, ans, res);
        return res;
    }
};