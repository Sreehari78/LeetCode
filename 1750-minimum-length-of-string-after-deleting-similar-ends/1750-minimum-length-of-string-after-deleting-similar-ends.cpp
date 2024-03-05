class Solution {
public:
    int minimumLength(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int left = 0, right = s.length() - 1;

        while(left < right) {
            if(s[left] == s[right]) {
                int c = s[left];
                while(left <= right && s[left] == c) left++;
                while(left <= right && s[right] == c) right--;
            }
            else break;
        }

        return right - left + 1;
    }
};