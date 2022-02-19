class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> types;
        for (auto c: candyType) {
            types.insert(c);
        }
        int totalTypes = types.size();
        int totalCandies = candyType.size();
        return min(totalTypes, totalCandies / 2);
    }
};