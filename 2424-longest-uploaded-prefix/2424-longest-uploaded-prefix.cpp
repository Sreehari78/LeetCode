class LUPrefix {
private:
    vector<int> server;
    int it = 0;
public:

    LUPrefix(int n) { 
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> temp(n,-1);
        server = temp;
    }

    void upload(int video) {
        server[video - 1] = 1;
        while(it < server.size()){
            if(server[it] == -1) break;
            it++;
        }
    }

    int longest() {
        return it;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */