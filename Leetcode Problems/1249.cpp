class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string resForward = "";
        int pStack = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                pStack++;
            } else if (s[i] == ')') {
                if (pStack - 1 < 0) {
                    s[i] = '_';
                    continue;
                }
                pStack--;
            }
        }
        pStack = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ')') {
                pStack++;
            } else if (s[i] == '(') {
                if (pStack - 1 < 0) {
                    s[i] = '_';
                    continue;
                }
                pStack--;
            }
        }
        s.erase(remove(s.begin(), s.end(), '_'), s.end());
        return s;
    }
};