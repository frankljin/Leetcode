class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        vector<int> steps;
        steps.emplace_back(1);
        steps.emplace_back(2);
        for (int i = 2; i < n; i++) {
            steps.emplace_back(steps[i - 1] + steps[i - 2]);
        }
        return steps[n - 1];
    }
};
