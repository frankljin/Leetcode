class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numbers;
        vector<int> out;
        for (int i = 0; i < nums.size(); i++) {
            if (numbers.find(target - nums[i]) != numbers.end()) {
                out.emplace_back(i);
                out.emplace_back(numbers[target - nums[i]]);
                return out;
            }
            numbers[nums[i]] = i;
        }
        return out;
    }
};