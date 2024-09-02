class Solution {
public:
    int strStr(string haystack, string needle) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        for(int i = 0; i < haystack.size(); i++) {
            if(haystack[i] == needle[0]) {
                int x = i, y = 0;

                while(x < haystack.size() && y < needle.size()) {
                    if(haystack[x] != needle[y])
                        break;
                    x++;
                    y++;
                }

                if(y == needle.size())
                    return i;
            }
        }
        
        return -1;
    }
};