class Solution {
public:
    int before = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if (root->right) bstToGst(root->right);
        before += root->val;
        root->val = before;
        if (root->left) bstToGst(root->left);
        return root;
    }
};