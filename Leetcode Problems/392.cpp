class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIdx = 0;
        for (int i = 0; i < t.length(); i++) {
            if (t[i] == s[sIdx]) sIdx++;
        }
        return sIdx == s.length();
    }
};