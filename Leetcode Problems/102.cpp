class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        if (root) q.push(root);
        while (q.size() > 0) {
            vector<int> currLayer;
            queue<TreeNode*> next;
            while (q.size() != 0) {
                TreeNode *curr = q.front();
                currLayer.emplace_back(curr->val);
                q.pop();
                if (curr->left) next.push(curr->left);
                if (curr->right) next.push(curr->right);
            }
            res.emplace_back(currLayer);
            q = next;
        }
        return res;
    }
};