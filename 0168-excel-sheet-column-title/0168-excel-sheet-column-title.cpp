class Solution {
private:
    string str = "";
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    string convertToTitle(int columnNumber) {
        while(columnNumber > 0){
            if(columnNumber%26==0){
                str.push_back(25+'A');
                columnNumber--;
            }
            else str.push_back(columnNumber%26+'A'-1);
            columnNumber /= 26;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};