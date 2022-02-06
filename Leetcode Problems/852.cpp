class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0, j = arr.size();
        while (i <= j) {
            int mid = (i + j) / 2;
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;
            if (arr[mid] < arr[mid + 1]) {
                i = mid;
            } else {
                j = mid;
            }
        }
        return 0;
    }
};