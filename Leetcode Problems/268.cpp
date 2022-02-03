class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        for (auto num : nums) {
            n ^= num ^ curr++;
        }
        return n;
    }
};
