class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *sentinel = new ListNode(0, head);
        ListNode *curr = sentinel;
        while (head) {
            if (head->next && head->val == head->next->val) {
                while (head->next && head->val == head->next->val) {
                    head = head->next;
                }
                curr->next = head->next;
            } else {
                curr = curr->next;
            }
            head = head->next;
        }
        return sentinel->next;
    }
};