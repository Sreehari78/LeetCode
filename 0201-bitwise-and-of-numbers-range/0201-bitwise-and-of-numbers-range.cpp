class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int count = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            count++;
        }
        return (left << count);
    }
};