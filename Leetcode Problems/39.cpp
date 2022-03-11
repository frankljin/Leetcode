class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& candidates, vector<int>& curr, int target, int currSum, int start) {
        if (currSum == target) {
            res.emplace_back(curr);
            return;
        }
        if (currSum > target) return;
        for (int i = start; i < candidates.size(); i++) {
            curr.emplace_back(candidates[i]);
            backtrack(res, candidates, curr, target, currSum + candidates[i], i);
            curr.pop_back();
            
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res, candidates, curr, target, 0, 0);
        return res;
    }
};