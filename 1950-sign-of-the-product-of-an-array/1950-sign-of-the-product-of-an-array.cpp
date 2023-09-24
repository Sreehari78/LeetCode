class Solution {
public:
    int arraySign(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int negative = 0;
        for(int it: nums) {
            if(it == 0) return 0;
            if(it < 0) negative++;
        }

        if(negative % 2 == 0) return 1;
        return -1;
    }
};
