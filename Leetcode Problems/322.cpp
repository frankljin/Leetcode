class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> minCoins(amount + 1, INT_MAX);
        minCoins[0] = 0;
        for (int i = 0; i < minCoins.size(); i++) {
            for (auto coin : coins) {
                if (i - coin >= 0 && minCoins[i - coin] != INT_MAX) {
                    minCoins[i] = min(minCoins[i], 1 + minCoins[i - coin]);
                }
            }
        }
        return minCoins.back() != INT_MAX ? minCoins.back() : -1;
    }
};