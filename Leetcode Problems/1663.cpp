class Solution {
public:
    string getSmallestString(int n, int k) {
        string res = string(n, 'a');
        int idx = res.length() - 1;
        k -= n;
        while (k) {
            res[idx] += min(25, k);
            idx--;
            k -= min(k, 25);
        }
        return res;
    }
};