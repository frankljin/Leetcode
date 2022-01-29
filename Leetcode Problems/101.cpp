class Solution {
public:
    bool leftRight(TreeNode* lNode, TreeNode* rNode) {
        if (!lNode) return !rNode;
        if (!rNode) return !lNode;
        if (lNode->val != rNode->val) return false;
        return leftRight(lNode->left, rNode->right) && leftRight(lNode->right, rNode->left);    
    }
    
    bool isSymmetric(TreeNode* root) {
        return leftRight(root->left, root->right);
    }   
};
