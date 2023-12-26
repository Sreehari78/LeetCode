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
        while (columnNumber) {
            columnNumber--;
            str = str + (char)((columnNumber) % 26 + 'A');
            columnNumber = (columnNumber) / 26;
        }

        reverse(str.begin(), str.end());
        return str;
    }
};