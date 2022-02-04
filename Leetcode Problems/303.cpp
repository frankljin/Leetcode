class NumArray {
public:
    vector<int> sumArray;
    
    NumArray(vector<int>& nums) {
        int curr = 0;
        for (int i = 0; i < nums.size(); i++) {
            curr += nums[i];
            sumArray.emplace_back(curr);
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) return sumArray[right];
        return sumArray[right] - sumArray[left - 1];
    }
};
