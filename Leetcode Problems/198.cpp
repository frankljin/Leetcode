class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> currMax(nums.size() + 1);
        currMax[1] = nums[0];
        for (int i = 2; i <= nums.size(); i++) {
            currMax[i] = max(currMax[i - 1], currMax[i - 2] + nums[i - 1]);
        }
        return currMax[nums.size()];
    }
};