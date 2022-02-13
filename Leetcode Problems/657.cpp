class Solution {
public:
    bool judgeCircle(string moves) {
        int uCount = 0, dCount = 0, lCount = 0, rCount = 0;
        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'U') {
                uCount += 1;
            } else if (moves[i] == 'D') {
                dCount += 1;
            } else if (moves[i] == 'L') {
                lCount += 1;
            } else {
                rCount += 1;
            }
        }
        return uCount == dCount && lCount == rCount;
    }
};