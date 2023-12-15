class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        unordered_map<char, int> mp;
        int count = 0;

        for(char it: jewels) mp[it]++;
        for(char it: stones) if( mp[it] == 1) count++;

        return count;
    }
}