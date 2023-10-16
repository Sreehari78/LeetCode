class Solution {
private:
    int n;

public:
    vector<vector<string>> res;
    vector<string> ans;

    bool isPalindrome(int start, int end, string s) {
        while(start <= end) if(s[start++] != s[end--]) return false;
        return true;
    }

    void reccursiveMethod(int index, string s) {
        if(index == n) {
            res.push_back(ans);
            return;
        }

        for(int i = index; i < n; i++)  {
            if(isPalindrome(index, i, s)) {
                ans.push_back(s.substr(index, i - index + 1));
                reccursiveMethod(i + 1, s);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        n = s.length();
        reccursiveMethod(0, s);
        return res;
    }
};