class Solution {
public:
    int getSum(int a, int b) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        return (a ^ b) + ((a & b) << 1);
    }
};