class Solution {
public:
    vector<string> cellsInRange(string s) {
        char startCol = s[0], endCol = s[3];
        char startRow = s[1], endRow = s[4];
        vector<string> res;
        for (char c = startCol; c <= endCol; c++) {
            for (char r = startRow; r <= endRow; r++) {
                string curr = "";
                curr += c;
                curr += r;
                res.emplace_back(curr);
            }
        }
        return res;
    }
};