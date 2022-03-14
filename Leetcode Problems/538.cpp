class Solution {
public:
    int before = 0;
    TreeNode* convertBST(TreeNode* root) {
        if (root) {
            if (root->right) convertBST(root->right);
            before += root->val;
            root->val = before;
            if (root->left) convertBST(root->left);   
        }
        return root;
    }
};