class Solution {
public:
Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    bool repeatedSubstringPattern(string s) {
        for(int i=s.size()-1; i>=0; i--){
            if(i==0) return false;
            string sub = s.substr(0,i);
            if(s+sub == sub + s) return true;
        }
        return false;
    }
};