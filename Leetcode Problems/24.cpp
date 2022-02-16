class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *curr = head;
        while (curr && curr->next) {
            swap(curr->val, curr->next->val);
            curr = curr->next->next;
        }
        return head;
    }
};