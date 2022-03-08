class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size() != 0) {
            double sum = 0, count = 0;
            queue<TreeNode*> temp;
            while (q.size() != 0) {
                TreeNode *curr = q.front();
                q.pop();
                sum += curr->val;
                count += 1;
                if (curr->left) {
                    temp.push(curr->left);
                }
                if (curr->right) {
                    temp.push(curr->right);
                }
            }
            q = temp;
            res.emplace_back(sum / count);
        }
        return res;
    }
};