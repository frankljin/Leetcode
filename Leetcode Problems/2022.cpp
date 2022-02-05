class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return {};
        vector<vector<int>> out;
        int curridx = 0;
        for (int i = 0; i < m; i++) {
            vector<int> curr;
            for (int j = 0; j < n; j++) {
                curr.emplace_back(original[curridx + j]);
            }
            curridx += n;
            out.emplace_back(curr);
        }
        return out;
    }
};