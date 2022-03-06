class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int total = 0;
        for (auto w : words) {
            bool isPref = true;
            for (int i = 0; i < pref.length(); i++) {
                if (pref[i] != w[i]) {
                    isPref = false;
                    break;
                }
            }
            if (isPref) total++;
        }
        return total;
    }
};