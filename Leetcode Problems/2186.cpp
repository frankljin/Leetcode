class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> counts;
        for (int i = 0; i < s.length(); i++) {
            counts[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            counts[t[i]]--;
        }
        int total = 0;
        for (auto const& c : counts) {
            if (c.second != 0) {
                total += abs(c.second);
            }
        }
        return total;
    }
};