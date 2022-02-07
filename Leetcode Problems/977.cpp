class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        vector<int> res(j + 1);
        int idx = nums.size() - 1;
        while (i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                res[idx--] = nums[i];
                i++;
            } else {
                res[idx--] = nums[j];
                j--;
            }
        }
        for (int i = 0; i < res.size(); i++) {
            res[i] = res[i] * res[i];
        }
        return res;
    }
};