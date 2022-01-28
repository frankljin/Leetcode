class TrieNode {
public:
    vector<TrieNode*> nextChar;
    bool isEnd;

    TrieNode() {
        nextChar = vector<TrieNode*> (26, nullptr);
        isEnd = false;
    }
};

class WordDictionary {   
public:
    TrieNode *root;
    
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++) {
            int idx = word[i] - 'a';
            if (!curr->nextChar[idx]) curr->nextChar[idx] = new TrieNode();
            curr = curr->nextChar[idx];
        }
        curr->isEnd = true;
    }
    
    bool trieSearch(TrieNode *tn, string word) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == '.') {
                for (int j = 0; j < 26; j++) {
                    if (tn->nextChar[j] && trieSearch(tn->nextChar[j], word.substr(i + 1))) return true;
                }
                return false;
            }
            int idx = word[i] - 'a';
            if (!tn->nextChar[idx]) return false;
            tn = tn->nextChar[idx];
        }
        return tn->isEnd;
    }
    
    bool search(string word) {
        TrieNode *curr = root;
        return trieSearch(curr, word);
    }
};
