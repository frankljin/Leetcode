class Solution {
public:
    vector<int> tree;
    void inOrder(TreeNode* root) {
        if (!root) return;
        inOrder(root->left);
        tree.emplace_back(root->val);
        inOrder(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        inOrder(root);
        for (int i = 0; i < tree.size() - 1; i++) {
            if (tree[i] >= tree[i + 1]) return false;
        }
        return true;
    }
};