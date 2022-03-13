class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& curr, int k, int n, int len, int start) {
        if (len > k) return;
        if (n <= 0) {
            if (n == 0 && len == k) res.emplace_back(curr);
            return;
        }
        for (int i = start; i <= 9; i++) {
            curr.emplace_back(i);
            backtrack(res, curr, k, n - i, len + 1, i + 1);
            curr.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res, curr, k, n, 0, 1);
        return res;
    }
};