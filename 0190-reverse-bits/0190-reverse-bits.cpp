class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        bitset<32> binary(n);
        string str = binary.to_string();
        reverse(str.begin(), str.end());
        bitset<32> result(str);

        return result.to_ullong();
        
    }
};