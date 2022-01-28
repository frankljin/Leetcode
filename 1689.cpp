class Solution {
public:
    int minPartitions(string n) {
        int maxn = 0;
        for (int i = 0; i < n.length(); i++) {
            if ((n[i] - '0') > maxn) maxn = (n[i] - '0');
        }
        return maxn;
    }
};
