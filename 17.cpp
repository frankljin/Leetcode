class Solution {
public:
    vector<string> res;
    map<char, string> digLetters = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits == "") return res;
        dfs(0, "", digits);
        return res;
    }
    
    void dfs(int idx, string path, string digits) {
        if (path.length() == digits.length()) {
            res.emplace_back(path);
            return;
        }
        string nextLetters = digLetters[digits[idx]];
        for (auto c : nextLetters) {
            dfs(idx + 1, path + c, digits);
        }
    }
};
