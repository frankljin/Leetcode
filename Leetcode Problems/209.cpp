class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int curr = 0;
        int minSum = INT_MAX;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while (sum >= target) {
                minSum = min(minSum, i + 1 - curr);
                sum -= nums[curr++];
            }
        }
        return minSum != INT_MAX ? minSum : 0;
    }
};