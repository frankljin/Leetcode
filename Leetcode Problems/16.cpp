class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX, res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(target - sum) < abs(diff)) {
                    diff = abs(target - sum);
                    res = sum;
                }
                if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return res;
    }
};