class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& curr, vector<int>& nums) {
        if (curr.size() == nums.size()) {
            res.emplace_back(curr);
        } else {
            for (int i = 0; i < nums.size(); i++) {
                if (find(curr.begin(), curr.end(), nums[i]) != curr.end()) continue;
                curr.emplace_back(nums[i]);
                backtrack(res, curr, nums);
                curr.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res, curr, nums);
        return res;
    }
};