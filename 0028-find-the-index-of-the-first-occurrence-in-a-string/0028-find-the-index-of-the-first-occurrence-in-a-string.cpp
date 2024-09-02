class Solution {
public:
    int strStr(string haystack, string needle) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        for(int i = 0; i < haystack.size(); i++)
            if(haystack.substr(i, needle.size()) ==  needle)
                return i;
        
        return -1;
    }
};