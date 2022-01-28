class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        for (auto q : queries) {
            int count = 0;
            for (auto p : points) {
                int x = (p[0] - q[0])*(p[0] - q[0]);
                int y = (p[1] - q[1])*(p[1] - q[1]);
                int r = q[2]*q[2];
                
                if (x + y <= r) {
                    count += 1;
                }
            }
            answer.emplace_back(count);
        }
        return answer;
    }
};
