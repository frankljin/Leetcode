class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> counts;
        vector<int> out;
        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }
        for (auto const &n : counts) {
            if (n.second == 1) out.emplace_back(n.first);
        }
        return out;
    }
};
