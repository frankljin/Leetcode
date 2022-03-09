class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *sentinel = new ListNode(0, head);
        ListNode *curr = sentinel;
        while (curr) {
            if (curr->next && curr->next->val == val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }
        return sentinel->next;
            
    }
};