class Solution {
public:
    int pairSum(ListNode* head) {
        std::vector<int> nodes;
        while (head) {
            nodes.emplace_back(head->val);
            head = head->next;
        }
        int max = nodes[0] + nodes[nodes.size() - 1];
        int i = 1, j = nodes.size() - 2;
        while (i < j) {
            int candidate = nodes[i++] + nodes[j--];
            if (candidate > max) max = candidate;
        }
        return max;
    }
};
