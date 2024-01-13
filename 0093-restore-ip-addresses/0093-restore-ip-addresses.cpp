#include <vector>
#include <string>

class Solution {
private:
    vector<string> result;

public:
    void recursiveMethod(int index, const string& s, int dots, const string& ip) {
        if (index == s.length() && dots == 4) {
            result.push_back(ip);
            return;
        }

        if (dots >= 4) return;

        for (int i = 1; i <= 3 && index + i <= s.length(); i++) {
            string ans = s.substr(index, i);
            if ((ans[0] == '0' && ans.length() > 1) || (i == 3 && stoi(ans) >= 256)) continue;

            string newIp = ip.empty() ? ans : ip + '.' + ans;
            recursiveMethod(index + i, s, dots + 1, newIp);
        }
    }

    vector<string> restoreIpAddresses(const string& s) {
        if (s.length() < 4 || s.length() > 12) return {};

        recursiveMethod(0, s, 0, "");
        return result;
    }
};
