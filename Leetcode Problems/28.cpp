class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        int currIdx = 0, startIdx = 0;
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] != needle[currIdx]) {
                i -= currIdx;
                startIdx = i + 1;
                currIdx = 0;
                continue;
            }
            currIdx += 1;
            if (currIdx == needle.length()) return startIdx;
        }
        return -1;
    }
};