class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size() - 1;
        while (idx >= 0 && digits[idx] + 1 == 10) {
            digits[idx] = 0;
            idx -= 1;
        }
        if (idx < 0) {
            digits.insert(digits.begin(), 1);
        } else {
            digits[idx] += 1;
        }
        return digits;
    }
};