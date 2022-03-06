class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int> res(2);
        while (i <= j) {
            int sum = numbers[i] + numbers[j];
            if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            } else {
                res[0] = (i + 1);
                res[1] = (j + 1);
                return res;
            }
        }
        return res;
    }
};