class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            int sum = 0, curr = i;
            while (curr != 0) {
                sum += curr % 2;
                curr /= 2;
            }
            ans.emplace_back(sum);
        }
        return ans;
    }
};