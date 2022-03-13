class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxNum = nums[0], minNum = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            maxNum = max(maxNum, nums[i]);
            minNum = min(minNum, nums[i]);
        }
        int gcd = 1;
        for (int i = 1; i <= minNum; i++) {
            if (maxNum % i == 0 && minNum % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
};