class Solution {
public:
    int diameter = 0;
    int dfs(TreeNode* root) {
        if (!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        diameter = max(left + right, diameter);
        return max(left, right) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return diameter;
    }
};