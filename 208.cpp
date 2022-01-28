class TrieNode {
    public:
        vector<TrieNode*> nextChar;
        bool isEnd;
        
        TrieNode() {
            nextChar = vector<TrieNode*> (26, nullptr);
            isEnd = false;
        }
};

class Trie {
public:
    TrieNode *root;
    
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++) {
            int idx = word[i] - 'a';
            if (!curr->nextChar[idx]) curr->nextChar[idx] = new TrieNode();
            curr = curr->nextChar[idx];
        }
        curr->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++) {
            int idx = word[i] - 'a';
            if (!curr->nextChar[idx]) return false;
            curr = curr->nextChar[idx];
        }
        return curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode *curr = root;
        for (int i = 0; i < prefix.length(); i++) {
            int idx = prefix[i] - 'a';
            if (!curr->nextChar[idx]) return false;
            curr = curr->nextChar[idx];
        }
        if (curr->isEnd) return true;
        for (int i = 0; i < 26; i++) {
            if (curr->nextChar[i]) return true;
        }
        return false;
    }
};
