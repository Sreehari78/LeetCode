class Solution {
public:
    int hammingWeight(uint32_t n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int count = 0;
        while(n > 0) {
            int temp = n % 2;
            n /= 2;
            if(temp == 1) count++;
        }
        return count;
    }
};