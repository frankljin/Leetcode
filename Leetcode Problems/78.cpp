class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& currlist, vector<int>& nums, int start) {
        res.emplace_back(currlist);
        for (int i = start; i < nums.size(); i++) {
            currlist.emplace_back(nums[i]);
            backtrack(res, currlist, nums, i + 1);
            currlist.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res, curr, nums, 0);
        return res;
    }
};