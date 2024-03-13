class Solution {
public:
    int pivotInteger(int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        return sqrt(n * (n + 1) / 2) == int(sqrt(n * (n + 1) / 2)) ? sqrt(n * (n + 1) / 2) : -1;
    }
};