class Solution {
public:
    int titleToNumber(string columnTitle) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if(columnTitle.length() == 1) return columnTitle[0] - '@';

        int val = columnTitle[0] - '@';
        for(int i = 1; i < columnTitle.length(); i++) {
            val *= 26;
            val += columnTitle[i] - '@';
        }
        
        return val;
    }
};
