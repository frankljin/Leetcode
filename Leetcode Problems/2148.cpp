class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums[0];
        bool allSame = true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != n) allSame = false;
        }
        if (allSame) return 0;
        int minNum = nums[0], maxNum = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            minNum = min(minNum, nums[i]);
            maxNum = max(maxNum, nums[i]);
        }
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != minNum && nums[i] != maxNum) res++;
        }
        return res;
    }
};