class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int longest = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<char> seen;
            seen.insert(s[i]);
            int curr = 1;
            for (int j = i + 1; j < n; j++) {
                if (seen.find(s[j]) == seen.end()) {
                    seen.insert(s[j]);
                    curr += 1;
                } else {
                    break;
                }
            }
            if (curr > longest) {
               longest = curr;
            }
        }
        return longest;
    }
};
