class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& curr, vector<int>& candidates, int target, int start) {
        if (target == 0) {
            res.emplace_back(curr);
            return;
        }
        if (target < 0) return;
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            curr.emplace_back(candidates[i]);
            backtrack(res, curr, candidates, target - candidates[i], i + 1);
            curr.pop_back();
        }
    }
        
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res, curr, candidates, target, 0);
        return res;
    }
};