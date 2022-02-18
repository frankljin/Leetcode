class Solution {
public:
    void dfs(vector<vector<int>>& res, vector<int> curr, vector<vector<int>>& graph, int node) {
        curr.emplace_back(node);
        if (node == graph.size() - 1) {
            res.emplace_back(curr);
        } else {
            for (auto g : graph[node]) {
                dfs(res, curr, graph, g);
            }
        }
        
    }
        
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> curr;
        dfs(res, curr, graph, 0);
        return res;
    }
};