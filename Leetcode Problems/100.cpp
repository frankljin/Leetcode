class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && q || p && !q) return false;
        if (!p && !q) return true;
        if (p->val != q->val) return false;
        bool leftTree = isSameTree(p->left, q->left);
        bool rightTree = isSameTree(p->right, q->right);
        return (leftTree && rightTree);
    }
};