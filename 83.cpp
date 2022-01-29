class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        while (curr && curr->next) {
            int nextInt = curr->next->val;
            int currInt = curr->val;
            if (currInt == nextInt) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            } 
        }
        return head;
    }
};
