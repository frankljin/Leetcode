class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int maxIncrease = 0;
        int n = grid.size();
        vector<int> colMax(n);
        vector<int> rowMax(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rowMax[i] = max(rowMax[i], grid[i][j]);
                colMax[j] = max(colMax[j], grid[i][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                maxIncrease += min(rowMax[i], colMax[j]) - grid[i][j];
            }
        }
        return maxIncrease;
    }
};