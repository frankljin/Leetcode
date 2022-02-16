class Solution {
public:
    vector<int> res;
    void preorderHelper(Node* root) {
        if (root) {
            res.emplace_back(root->val);
            for (int i = 0; i < root->children.size(); i++) {
                preorderHelper(root->children[i]);
            }
        }
    }
    
    vector<int> preorder(Node* root) {
        preorderHelper(root);
        return res;
    }
};