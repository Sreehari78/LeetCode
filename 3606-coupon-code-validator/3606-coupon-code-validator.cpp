class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<pair<string, string>> ans;
        vector<string> res;
        unordered_set<string> businessLineCheck = {"electronics", "grocery", "pharmacy", "restaurant"};

        for(int i = 0; i < isActive.size(); i++) {
            bool isValid = true;

            // code check
            if(code[i] == "")
                continue;
            
            for(char c : code[i])
                if(!isalnum(c) && c != '_') {
                    isValid = false;
                    break;
                }

            // business line check
            if(!businessLineCheck.count(businessLine[i]))
                isValid = false;

            // isActive line check
            if(!isActive[i])
                isValid = false;

            if(isValid)
                ans.push_back({code[i], businessLine[i]});
        }  

        sort(ans.begin(), ans.end(), [](const auto& a, const auto& b) { return a.second == b.second ? a.first < b.first : a.second < b.second; });

        for(int i = 0; i < ans.size(); i++)
            res.push_back(ans[i].first);

        return res;
    }
};