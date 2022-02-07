class Solution {
public:
    char findTheDifference(string s, string t) {
        int letters[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            letters[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            letters[t[i] - 'a']--;
            if (letters[t[i] - 'a'] < 0) return t[i];
        }
        return 'x';
    }
};