class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *first = head;
        int nodes = 0;
        while (head) {
            nodes += 1;
            head = head->next;
        }
        int index = nodes / 2;
        while (index > 0) {
            first = first->next;
            index -= 1;
        }
        return first;
    }
};