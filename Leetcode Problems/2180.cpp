class Solution {
public:
    int numSum(int num) {
        int sum = 0;
        while (num > 0) {
            int rem = num % 10;
            sum += rem;
            num = num / 10;
        }
        return sum;
    }
    
    int countEven(int num) {
        int total = 0;
        for (int i = 1; i <= num; i++) {
            if (numSum(i) % 2 == 0) total++;
        }
        return total;
    }
};