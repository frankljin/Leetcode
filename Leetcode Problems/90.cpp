class Solution {
public:
    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& curr, int start) {
        res.emplace_back(curr);
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            curr.emplace_back(nums[i]);
            backtrack(nums, res, curr, i + 1);
            curr.pop_back();
        }
    }
        
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        backtrack(nums, res, curr, 0);
        return res;
    }
};