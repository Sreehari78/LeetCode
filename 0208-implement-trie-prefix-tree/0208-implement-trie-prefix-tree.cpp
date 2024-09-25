class TrieNode {
public:
    char c;
    bool flag;
    TrieNode* links[26] = {nullptr};

    TrieNode(char ch) {
        c = ch;
        flag = false;
    }
};

class Trie {
private:
    TrieNode* root = new TrieNode('/');
public:
    Trie() {
        
    }
    
    void insert(string word) {
        TrieNode* ptr = root;

        for(char& c: word) {
            if(!ptr->links[c - 'a'])
                ptr->links[c - 'a'] = new TrieNode(c);

            ptr = ptr->links[c - 'a'];
        }

        ptr->flag = true;
    }
    
    bool search(string word) {
        TrieNode* ptr = root;

        for(char& c: word) {
            if(!ptr->links[c - 'a'])
                return false;

            ptr = ptr->links[c - 'a'];
        }

        return ptr->flag;
    }
    
    bool startsWith(string prefix) {
        TrieNode* ptr = root;

        for(char& c: prefix) {
            if(!ptr->links[c - 'a'])
                return false;
            
            ptr = ptr->links[c - 'a'];
        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */