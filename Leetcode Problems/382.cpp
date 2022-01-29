class Solution {
public:
    ListNode *root;
    
    Solution(ListNode* head) {
        root = head;
    }
    
    int getRandom() {
        vector<int> nodes;
        int length = 0;
        ListNode *node_ptr = root;
        while (node_ptr) {
            length += 1;
            nodes.emplace_back(node_ptr->val);
            node_ptr = node_ptr->next;
        }
        int idx = rand() % length;
        return nodes[idx];      
    }
};
