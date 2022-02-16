class Solution {
public:
    vector<int> res;
    void postorderHelper(Node* root) {
        if (root) {
            for (int i = 0; i < root->children.size(); i++) {
                postorderHelper(root->children[i]);
            }
            res.emplace_back(root->val);
        }
    }
    
    vector<int> postorder(Node* root) {
        postorderHelper(root);
        return res;
    }
};