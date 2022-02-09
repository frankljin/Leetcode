class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int n : nums) {
            freq[n]++;
        }
        int res = 0;
        for (auto const& f : freq) {
            if (k != 0 && freq.find(k + f.first) != freq.end() || k == 0 && f.second > 1) {
                res++;
            }
        }
        return res;
    }
};