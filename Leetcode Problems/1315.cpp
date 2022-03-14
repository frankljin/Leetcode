class Solution {
public:
    int sumHelper(TreeNode* curr, int parentVal, int grandparentVal) {
        if (!curr) return 0;
        int addAmount = 0;
        if (grandparentVal % 2 == 0) addAmount = curr->val;
        return addAmount + sumHelper(curr->left, curr->val, parentVal) + sumHelper(curr->right, curr->val, parentVal);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        return sumHelper(root, 1, 1);
    }
};