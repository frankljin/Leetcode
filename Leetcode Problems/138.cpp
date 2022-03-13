class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *copy = new Node(0);
        Node *curr = head;
        Node *copyCurr = copy;
        unordered_map<Node*, Node*> nodeMap;
        while (curr) {
            copyCurr->next = new Node(curr->val);
            nodeMap[curr] = copyCurr->next;
            curr = curr->next;
            copyCurr = copyCurr->next;
        }
        for (auto const& n : nodeMap) {
            n.second->random = n.first->random ? nodeMap[n.first->random] : nullptr;
        }
        return copy->next;
    }
};