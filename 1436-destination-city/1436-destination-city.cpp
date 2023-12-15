class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        string str = paths[0][1];
        int i = -1;
        
        while(++i < paths.size()) 
        if(paths[i][0] == str) {
            str = paths[i][1];
            i = -1;
        }

        return str;
    }
};